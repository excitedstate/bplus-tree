这个项目比较优秀, 可以学习一下

# 项目研究笔记

## Note: bing: 2023-11-28 21:09:56

> 先看 [test/bench-basic.c](test/bench-basic.c)

这个`TEST_START`, `TEST_END`, `BENCH_START`和`BENCH_END`宏不错, 很有用, 可以移植到项目中

测试执行流程如下

1. 在TEST_START中创建main函数, 尝试删除原有的数据; 然后创建新的 B+树, 保存在[/tmp/basic-bench.bp](/tmp/basic-bench.bp)
2. 初始化key和value
3. 每次测20000(delta)的量, 看速度有多快
4. 使用bp_sets()函数单点插入, 可以看到, 使用pthread_rwlock保证了并发安全
5. 使用bp_gets()函数单点查询, 可以看到, 使用pthread_rwlock保证了并发安全.
6. 最后使用bp_removes()删除所有的键值对