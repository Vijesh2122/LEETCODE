class Solution {
public:
    int dayOfYear(string date) {
        int n;
        int year=(date[0]-'0')*1000 + (date[1]-'0')*100 + (date[2]-'0')*10 +date[3]-'0';
        int month=((date[5]-'0')*10 + (date[6]-'0'));
        int day=((date[8]-'0')*10 + (date[9]-'0'));
        switch(month)
        {
            case 1:n=day;break;
            case 2:n=31+day;break;
            case 3:n=59+day;break;
            case 4:n=90+day;break;
            case 5:n=120+day;break;
            case 6:n=151+day;break;
            case 7:n=181+day;break;
            case 8:n=212+day;break;
            case 9:n=243+day;break;
            case 10:n=273+day;break;
            case 11:n=304+day;break;
            case 12:n=334+day;break;
        }
        if(month>2 &&(year%400==0 || (year%4==0 && year%100!=0)))return n+1;
        return n;

    }
};