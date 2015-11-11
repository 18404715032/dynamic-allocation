//
//  main.cpp
//  dynamic allocation
//
//  Created by 杨浩 on 15/11/11.
//  Copyright © 2015年 杨浩. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int *a;
    a=(int *)malloc(4);
    if(a==0)
        exit(0);
    *a=100;
    printf("a=%x *a=%x\n",a,*a);
    return 0;
}