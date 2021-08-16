#include<iostream>
using namespace std;
int main()
{
    double mill_charg, gura_bet;
    cout <<"mill_charg = ";
    cin >>mill_charg;
    cout <<"gura_bet = ";
    cin >>gura_bet;
    cout <<endl;
    int  mot_menajar_pabe = 0, mot_bodar_pabe =0;

    while(true){

        double joma_taka, mot_mill,  mot_buy, menajar_pabe, bodar_pabe;

        cout <<"joma_taka = ";
        cin >>joma_taka;
       // cout <<endl;
        cout <<"mot_mill = ";
        cin >>mot_mill;
        cout <<endl;
        //mot_buy = (mill_charg*mot_mill)+gura_bet;
        cout <<"mot_buy = "<<(mill_charg*mot_mill)+gura_bet<<endl;
        if(((mill_charg*mot_mill)+gura_bet)> joma_taka)
        {
            menajar_pabe = ((mill_charg*mot_mill)+gura_bet)- joma_taka;
            cout <<"menajar_pabe = "<<menajar_pabe<<endl;
        }else {
            bodar_pabe = joma_taka- ((mill_charg*mot_mill)+gura_bet);
            cout <<"bodar_pabe = "<<bodar_pabe <<endl;

        }
cout <<endl;
    mot_menajar_pabe +=0.5 + menajar_pabe;
    menajar_pabe = 0;
    cout <<" mot_menajar_pabe  = "<< mot_menajar_pabe<<endl;
    mot_bodar_pabe +=0.5 + bodar_pabe;
    bodar_pabe = 0;
    cout <<"mot_bodar_pabe = " << mot_bodar_pabe<<endl;

    cout <<endl;
    }

    return 0;
}
