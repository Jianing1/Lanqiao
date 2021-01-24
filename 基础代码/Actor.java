package imooc.Thread;

public class Actor extends Thread{
    public void run() {
        System.out.println(getName() + "我是一个演员！");
        int count = 0;
        boolean KeepRunning = true;
        while (KeepRunning) {
            System.out.println(getName() + "登台演出" + (++count));
            if(count==100){
                KeepRunning=false;
            }
        }
        if(count%10==0) {
            try {
                Thread.sleep(3000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        System.out.println(getName() + "的演出结束了！");
    }
    public static void main(String[] args) {
        Thread actor =new Actor();
        actor.setName("Mr.Thread");
        actor.start();
        Thread actressThread=new Thread(new Actress(),"Ms.Runnable");
        actressThread.start();
    }
    static class Actress implements Runnable{
        public void run(){
            System.out.println(Thread.currentThread().getName() + "我是一个演员！");
            int count = 0;
            boolean KeepRunning = true;
            while (KeepRunning) {
                System.out.println(Thread.currentThread().getName()+ "登台演出" + (++count));
                if(count==100){
                    KeepRunning=false;
                }
            }
            if(count%10==0) {
                try {
                    Thread.sleep(3000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println(Thread.currentThread().getName() + "的演出结束了！");
        }
    }
}


