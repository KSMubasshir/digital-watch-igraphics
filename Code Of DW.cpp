# include "iGraphics.h"
#include <stdio.h>
#include <time.h>
int m=0,n;
int t[3];
int h1,h2,m1,m2,s1,s2,ah1,bh1,ch1,dh1,eh1,fh1,gh1,ah2,bh2,ch2,dh2,eh2,fh2,gh2,am1,bm1,cm1,dm1,em1,fm1,gm1,am2,bm2,cm2,dm2,em2,fm2,gm2,as1,bs1,cs1,ds1,es1,fs1,gs1,as2,bs2,cs2,ds2,es2,fs2,gs2;
void blinker(void)
{
    if(m==0)
        m=1;
    else
        m=0;
}
void gettime(int t[])
{
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
}
void timegettingfunc()
{
    gettime(t);
    h1=t[0]/10;
    h2=t[0]%10;
    m1=t[1]/10;
    m2=t[1]%10;
    s1=t[2]/10;
    s2=t[2]%10;
}
void numbersetter()
{
    if(h1==0)
    {
        ah1=1;
        bh1=1;
        ch1=1;
        dh1=1;
        eh1=1;
        fh1=1;
        gh1=0;
    }
    else if(h1==1)
    {
        ah1=0;
        bh1=1;
        ch1=1;
        dh1=0;
        eh1=0;
        fh1=0;
        gh1=0;
    }
    else if(h1==2)
    {
        ah1=1;
        bh1=0;
        ch1=1;
        dh1=1;
        eh1=0;
        fh1=1;
        gh1=1;
    }
    else if(h1==3)
    {
        ah1=1;
        bh1=1;
        ch1=1;
        dh1=1;
        eh1=0;
        fh1=0;
        gh1=1;
    }
    else if(h1==4)
    {
        ah1=0;
        bh1=1;
        ch1=1;
        dh1=0;
        eh1=1;
        fh1=0;
        gh1=1;
    }
    else if(h1==5)
    {
        ah1=1;
        bh1=1;
        ch1=0;
        dh1=1;
        eh1=1;
        fh1=0;
        gh1=1;
    }
    if(h1==6)
    {
        ah1=1;
        bh1=1;
        ch1=0;
        dh1=1;
        eh1=1;
        fh1=1;
        gh1=1;
    }
    else if(h1==7)
    {
        ah1=0;
        bh1=1;
        ch1=1;
        dh1=1;
        eh1=0;
        fh1=0;
        gh1=0;
    }
    else if(h1==8)
    {
        ah1=1;
        bh1=1;
        ch1=1;
        dh1=1;
        eh1=1;
        fh1=1;
        gh1=1;
    }
    else if(h1==9)
    {
        ah1=1;
        bh1=1;
        ch1=1;
        dh1=1;
        eh1=1;
        fh1=0;
        gh1=1;
    }
    if(h2==0)
    {
        ah2=1;
        bh2=1;
        ch2=1;
        dh2=1;
        eh2=1;
        fh2=1;
        gh2=0;
    }
    else if(h2==1)
    {
        ah2=0;
        bh2=1;
        ch2=1;
        dh2=0;
        eh2=0;
        fh2=0;
        gh2=0;
    }
    else if(h2==2)
    {
        ah2=1;
        bh2=0;
        ch2=1;
        dh2=1;
        eh2=0;
        fh2=1;
        gh2=1;
    }
    else if(h2==3)
    {
        ah2=1;
        bh2=1;
        ch2=1;
        dh2=1;
        eh2=0;
        fh2=0;
        gh2=1;
    }
    else if(h2==4)
    {
        ah2=0;
        bh2=1;
        ch2=1;
        dh2=0;
        eh2=1;
        fh2=0;
        gh2=1;
    }
    else if(h2==5)
    {
        ah2=1;
        bh2=1;
        ch2=0;
        dh2=1;
        eh2=1;
        fh2=0;
        gh2=1;
    }
    if(h2==6)
    {
        ah2=1;
        bh2=1;
        ch2=0;
        dh2=1;
        eh2=1;
        fh2=1;
        gh2=1;
    }
    else if(h2==7)
    {
        ah2=0;
        bh2=1;
        ch2=1;
        dh2=1;
        eh2=0;
        fh2=0;
        gh2=0;
    }
    else if(h2==8)
    {
        ah2=1;
        bh2=1;
        ch2=1;
        dh2=1;
        eh2=1;
        fh2=1;
        gh2=1;
    }

    else if(h2==9)
    {
        ah2=1;
        bh2=1;
        ch2=1;
        dh2=1;
        eh2=1;
        fh2=0;
        gh2=1;
    }
    if(m1==0)
    {
        am1=1;
        bm1=1;
        cm1=1;
        dm1=1;
        em1=1;
        fm1=1;
        gm1=0;
    }
    else if(m1==1)
    {
        am1=0;
        bm1=1;
        cm1=1;
        dm1=0;
        em1=0;
        fm1=0;
        gm1=0;
    }
    else if(m1==2)
    {
        am1=1;
        bm1=0;
        cm1=1;
        dm1=1;
        em1=0;
        fm1=1;
        gm1=1;
    }
    else if(m1==3)
    {
        am1=1;
        bm1=1;
        cm1=1;
        dm1=1;
        em1=0;
        fm1=0;
        gm1=1;
    }
    else if(m1==4)
    {
        am1=0;
        bm1=1;
        cm1=1;
        dm1=0;
        em1=1;
        fm1=0;
        gm1=1;
    }
    else if(m1==5)
    {
        am1=1;
        bm1=1;
        cm1=0;
        dm1=1;
        em1=1;
        fm1=0;
        gm1=1;
    }
    if(m1==6)
    {
        am1=1;
        bm1=1;
        cm1=0;
        dm1=1;
        em1=1;
        fm1=1;
        gm1=1;
    }
    else if(m1==7)
    {
        am1=0;
        bm1=1;
        cm1=1;
        dm1=1;
        em1=0;
        fm1=0;
        gm1=0;
    }
    else if(m1==8)
    {
        am1=1;
        bm1=1;
        cm1=1;
        dm1=1;
        em1=1;
        fm1=1;
        gm1=1;
    }
    else if(m1==9)
    {
        am1=1;
        bm1=1;
        cm1=1;
        dm1=1;
        em1=1;
        fm1=0;
        gm1=1;
    }
    if(m2==0)
    {
        am2=1;
        bm2=1;
        cm2=1;
        dm2=1;
        em2=1;
        fm2=1;
        gm2=0;
    }
    else if(m2==1)
    {
        am2=0;
        bm2=1;
        cm2=1;
        dm2=0;
        em2=0;
        fm2=0;
        gm2=0;
    }
    else if(m2==2)
    {
        am2=1;
        bm2=0;
        cm2=1;
        dm2=1;
        em2=0;
        fm2=1;
        gm2=1;
    }
    else if(m2==3)
    {
        am2=1;
        bm2=1;
        cm2=1;
        dm2=1;
        em2=0;
        fm2=0;
        gm2=1;
    }
    else if(m2==4)
    {
        am2=0;
        bm2=1;
        cm2=1;
        dm2=0;
        em2=1;
        fm2=0;
        gm2=1;
    }
    else if(m2==5)
    {
        am2=1;
        bm2=1;
        cm2=0;
        dm2=1;
        em2=1;
        fm2=0;
        gm2=1;
    }
    if(m2==6)
    {
        am2=1;
        bm2=1;
        cm2=0;
        dm2=1;
        em2=1;
        fm2=1;
        gm2=1;
    }
    else if(m2==7)
    {
        am2=0;
        bm2=1;
        cm2=1;
        dm2=1;
        em2=0;
        fm2=0;
        gm2=0;
    }
    else if(m2==8)
    {
        am2=1;
        bm2=1;
        cm2=1;
        dm2=1;
        em2=1;
        fm2=1;
        gm2=1;
    }
    else if(m2==9)
    {
        am2=1;
        bm2=1;
        cm2=1;
        dm2=1;
        em2=1;
        fm2=0;
        gm2=1;
    }
    if(s1==0)
    {
        as1=1;
        bs1=1;
        cs1=1;
        ds1=1;
        es1=1;
        fs1=1;
        gs1=0;
    }
    else if(s1==1)
    {
        as1=0;
        bs1=1;
        cs1=1;
        ds1=0;
        es1=0;
        fs1=0;
        gs1=0;
    }
    else if(s1==2)
    {
        as1=1;
        bs1=0;
        cs1=1;
        ds1=1;
        es1=0;
        fs1=1;
        gs1=1;
    }
    else if(s1==3)
    {
        as1=1;
        bs1=1;
        cs1=1;
        ds1=1;
        es1=0;
        fs1=0;
        gs1=1;
    }
    else if(s1==4)
    {
        as1=0;
        bs1=1;
        cs1=1;
        ds1=0;
        es1=1;
        fs1=0;
        gs1=1;
    }
    else if(s1==5)
    {
        as1=1;
        bs1=1;
        cs1=0;
        ds1=1;
        es1=1;
        fs1=0;
        gs1=1;
    }
    if(s1==6)
    {
        as1=1;
        bs1=1;
        cs1=0;
        ds1=1;
        es1=1;
        fs1=1;
        gs1=1;
    }
    else if(s1==7)
    {
        as1=0;
        bs1=1;
        cs1=1;
        ds1=1;
        es1=0;
        fs1=0;
        gs1=0;
    }
    else if(s1==8)
    {
        as1=1;
        bs1=1;
        cs1=1;
        ds1=1;
        es1=1;
        fs1=1;
        gs1=1;
    }
    else if(s1==9)
    {
        as1=1;
        bs1=1;
        cs1=1;
        ds1=1;
        es1=1;
        fs1=0;
        gs1=1;
    }
    if(s2==0)
    {
        as2=1;
        bs2=1;
        cs2=1;
        ds2=1;
        es2=1;
        fs2=1;
        gs2=0;
    }
    else if(s2==1)
    {
        as2=0;
        bs2=1;
        cs2=1;
        ds2=0;
        es2=0;
        fs2=0;
        gs2=0;
    }
    else if(s2==2)
    {
        as2=1;
        bs2=0;
        cs2=1;
        ds2=1;
        es2=0;
        fs2=1;
        gs2=1;
    }
    else if(s2==3)
    {
        as2=1;
        bs2=1;
        cs2=1;
        ds2=1;
        es2=0;
        fs2=0;
        gs2=1;
    }
    else if(s2==4)
    {
        as2=0;
        bs2=1;
        cs2=1;
        ds2=0;
        es2=1;
        fs2=0;
        gs2=1;
    }
    else if(s2==5)
    {
        as2=1;
        bs2=1;
        cs2=0;
        ds2=1;
        es2=1;
        fs2=0;
        gs2=1;
    }
    if(s2==6)
    {
        as2=1;
        bs2=1;
        cs2=0;
        ds2=1;
        es2=1;
        fs2=1;
        gs2=1;
    }
    else if(s2==7)
    {
        as2=0;
        bs2=1;
        cs2=1;
        ds2=1;
        es2=0;
        fs2=0;
        gs2=0;
    }
    else if(s2==8)
    {
        as2=1;
        bs2=1;
        cs2=1;
        ds2=1;
        es2=1;
        fs2=1;
        gs2=1;
    }
    else if(s2==9)
    {
        as2=1;
        bs2=1;
        cs2=1;
        ds2=1;
        es2=1;
        fs2=0;
        gs2=1;
    }
}
void iDraw()
{
    iClear();
    iSetColor(20, 200,0);
    timegettingfunc();
    numbersetter();
    if(ah1)iFilledRectangle(110,130,50,8.5);
    if(bh1)iFilledRectangle(165,140,8.5,50);
    if(ch1)iFilledRectangle(165,200,8.5,50);
    if(dh1)iFilledRectangle(160,260,-50,-8.5);
    if(eh1)iFilledRectangle(100,250,8.5,-50);
    if(fh1)iFilledRectangle(100,190,8.5,-50);
    if(gh1)iFilledRectangle(110,190,50,8.5);
    if(ah2)iFilledRectangle(190,130,50,8.5);
    if(bh2)iFilledRectangle(245,140,8.5,50);
    if(ch2)iFilledRectangle(245,200,8.5,50);
    if(dh2)iFilledRectangle(240,260,-50,-8.5);
    if(eh2)iFilledRectangle(180,250,8.5,-50);
    if(fh2)iFilledRectangle(180,190,8.5,-50);
    if(gh2)iFilledRectangle(190,190,50,8.5);
    if(am1)iFilledRectangle(290,130,50,8.5);
    if(bm1)iFilledRectangle(345,140,8.5,50);
    if(cm1)iFilledRectangle(345,200,8.5,50);
    if(dm1)iFilledRectangle(340,260,-50,-8.5);
    if(em1)iFilledRectangle(280,250,8.5,-50);
    if(fm1)iFilledRectangle(280,190,8.5,-50);
    if(gm1)iFilledRectangle(290,190,50,8.5);
    if(am2)iFilledRectangle(370,130,50,8.5);
    if(bm2)iFilledRectangle(425,140,8.5,50);
    if(cm2)iFilledRectangle(425,200,8.5,50);
    if(dm2)iFilledRectangle(420,260,-50,-8.5);
    if(em2)iFilledRectangle(360,250,8.5,-50);
    if(fm2)iFilledRectangle(360,190,8.5,-50);
    if(gm2)iFilledRectangle(370,190,50,8.5);
    if(as1)iFilledRectangle(470,130,50,8.5);
    if(bs1)iFilledRectangle(525,140,8.5,50);
    if(cs1)iFilledRectangle(525,200,8.5,50);
    if(ds1)iFilledRectangle(520,260,-50,-8.5);
    if(es1)iFilledRectangle(460,250,8.5,-50);
    if(fs1)iFilledRectangle(460,190,8.5,-50);
    if(gs1)iFilledRectangle(470,190,50,8.5);
    if(as2)iFilledRectangle(550,130,50,8.5);
    if(bs2)iFilledRectangle(605,140,8.5,50);
    if(cs2)iFilledRectangle(605,200,8.5,50);
    if(ds2)iFilledRectangle(600,260,-50,-8.5);
    if(es2)iFilledRectangle(540,250,8.5,-50);
    if(fs2)iFilledRectangle(540,190,8.5,-50);
    if(gs2)iFilledRectangle(550,190,50,8.5);
    if(m)
    {
        iFilledRectangle(260,160,10,10);
        iFilledRectangle(260,220,10,10);

        iFilledRectangle(440,160,10,10);
        iFilledRectangle(440,220,10,10);
    }
    iSetColor(20, 200, 0);
    iText(40, 40, "Digital Watch");
}
void iMouseMove(int mx, int my)
{
}
void iMouse(int button, int state, int mx, int my)
{
}
void iKeyboard(unsigned char key)
{
}
void iSpecialKeyboard(unsigned char key)
{
}
int main()
{
    int t[3] = {};
    iSetTimer(500,blinker);
    timegettingfunc();
    numbersetter();
    iInitialize(700, 350, "Digital Watch");
    return 0;
}
