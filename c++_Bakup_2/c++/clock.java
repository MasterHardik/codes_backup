class  clock{
        private int hours;
        private int minutes;
        private int seconds;
        private String Meridian;
    public void lock(){
        this.hours = 0;
        this.seconds=0;
        this.minutes=0;
    }
    void clock(int hours,int minutes,int seconds){
        if(hours <= 24){
            this.hours = hours;
            if(hours>12){
                this.Meridian = "PM";
            }
            else this.Meridian = "AM";
        }
        else{
            System.out.println("hours Invalid..!!");
        }
        if(minutes <60){
            this.minutes = minutes;
        }
        else{
            System.out.println("minutes Invalid..!!");
        }
        if(seconds<60){
            this.seconds = seconds;
        }
        else{
            System.out.println("Seconds Invalid..!!");
        }

    }

    void ChangeFormat(int hours,int minutes,int seconds){
        if(hours >12) {
            this.hours = (hours - 12);
            this.Meridian = "PM";
        }
    }
    public static void main(String []args){
        clock c ;
        c = new clock();
        System.out.println("12-Format Time : "+c.hours+":"+c.minutes+":"+c.seconds);
        c.clock(12,56,45);
        System.out.println("24-Format Time : "+c.hours+":"+c.minutes+":"+c.seconds+" ");
        c.clock(1,56,24);
        c.ChangeFormat(1,56,24);
        System.out.println("12-Format Time : "+c.hours+":"+c.minutes+":"+c.seconds+" "+c.Meridian);
    }
}