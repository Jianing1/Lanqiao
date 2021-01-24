package imooc.Thread;

/*
* 隋唐演艺大戏舞台
* */
public class Stage extends Thread{
    public void run(){
        System.out.println("欢迎观看隋唐演艺");
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("大幕徐徐拉开");
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("话说隋朝末年，隋军和农民起义军杀的昏天黑地");
        ArmyRunnable armyTaskOfSuiDynasty=new ArmyRunnable();
        ArmyRunnable armyTaskOfRevolt=new ArmyRunnable();
//        使用Runnable接口创建线程
        Thread armyOfSuiDynasty=new Thread(armyTaskOfSuiDynasty,"隋军");
        Thread armyOfRevolt=new Thread(armyTaskOfRevolt,"农民起义军");
//        启动线程,让军队开始作战
        armyOfSuiDynasty.start();
        armyOfRevolt.start();
//        舞台线程休眠，大家专心观看军队厮杀
        try {
            Thread.sleep(50);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        armyTaskOfSuiDynasty.KeepRunning=false;
        armyTaskOfRevolt.KeepRunning=false;
        try {
            armyOfRevolt.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("当双方激战正酣，半路杀出了个程咬金");
        Thread mrCheng=new KeyPersonThread();
        mrCheng.setName("程咬金");
        System.out.println("程咬金的理想就是结束战斗，使百姓安居乐业！");
        armyTaskOfSuiDynasty.KeepRunning=true;
        armyTaskOfRevolt.KeepRunning=true;
        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        /*
        * 历史大戏留给关键人物
        */
        mrCheng.start();
        try {
            mrCheng.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("战争结束，人民安居乐业，程先生实现了积极的人生理想，为人们做出了贡献");
        System.out.println("感谢观看隋唐演艺，再见！");

    }

    public static void main(String[] args) {
        new Stage().start();
    }
}
