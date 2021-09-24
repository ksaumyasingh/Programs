/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgwhile;

/**
 *
 * @author ksaum
 */
public class While {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int i=2,num=1;
        System.out.println(num);
        num++;
        while(num<=100)
        {
            i=2;
            int f=0;
            while(i<num)
            {
                if(num%i==0)
                {
                    f=1;
                    break;
                }
                i++;
            }  
            if(f==0)
                System.out.println(num);
            num++;
        }
    }
    
}

run:
1
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
BUILD SUCCESSFUL (total time: 0 seconds)

