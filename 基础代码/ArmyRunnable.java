package imooc.Thread;
//军队线程
//模拟作战双方的行为
public class ArmyRunnable implements Runnable{
//    volatile保证了线程可以正确的读取其他线程写入的值
//    可见性ref JMM happens-before原则
    volatile boolean KeepRunning;

    @Override
    public void run() {
    while(KeepRunning){
//        发动五连击
        for(int i=0;i<5;i++){
        System.out.println(Thread.currentThread().getName()+"进攻对方["+i+"]");
//        让出了处理器时间,下一次该谁进攻还不一定呢！
        Thread.yield();
    }
        System.out.println(Thread.currentThread().getName()+"结束了战斗！");
    }
    }
}
