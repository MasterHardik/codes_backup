package ATM;
import java.util.Scanner;
import java.util.*;
public class practiceAtm {
    
    //package ATM;
//import java.util.*;
//class bank_function{
    public int NetBal = 35000;
    void Check_bal(){
        System.out.println("Net Balance is "+NetBal+"/-");
        return;
    }
    void deposit(int amt){
        
        int amount = amt ;
        NetBal += amount ;
        
    }
    void withdraw(int Wd){
        if( NetBal-Wd>=0){
        int withdraw = Wd;
        NetBal -= withdraw;
    }
        else {
            System.out.println("Not enough cash!! ");
        }
}

//class AccDetail{
    void User(String UName, int i_d ){
        String Username = UName ;
        int id = i_d;   
    }
    void display(){
        System.out.println("Userid :");
    }
//}

    

//public class Main {
   
    public static void main(String[] args) {
        //System.out.println("Hello, World!");
        practiceAtm U = new practiceAtm();
        //U.User("Hardyboy",4854008);
        //bank_function f = new bank_function();
        Scanner sc = new Scanner(System.in);
        while(true){
        //f.Check_bal();
            System.out.println("\n***********************************");
            
        System.out.println("\n\tWelcome to ATM\n\n1.Check Balance\n2.Deposit money \n3.Withdraw Cash \n4.Exit\n");
            System.out.println("***********************************\nEnter your choice : ");
        
        int choice = sc.nextInt();
            System.out.println("\n***********************************");
        switch(choice){
            case 1 : U.Check_bal();
                    //timer.CrunchyTimerExample(10);
                break;
            
            case 2 : System.out.println(" Enter amount :");
                int a = sc.nextInt();
                U.deposit(a);
                break;
                
                
            case 3 : System.out.println("Enter amount :");
                int ad = sc.nextInt();
                U.withdraw (ad);
                break;
            case 4: System.out.println("Exiting..");
            	System.exit(0);
            
            default : return ;
            
        }
//            String s = nextString();
        }
     }   //switch ()
}
/*
class Timer {
    public void CrunchyTimerExample(int Seconds){
    //Timer timer ;
    Timer timer = new Timer();
    //Schedule Next Task () call in 10 Seconds
    timer.schedule(new NextTask(),Seconds*100);
}
}
*/