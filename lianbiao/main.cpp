//
//  main.cpp
//  lianbiao
//
//  Created by 20141105044y on 15/12/2.
//  Copyright © 2015年 20141105044y. All rights reserved.
//

#include <iostream>
struct student
{
    char name[100];
    int born;
    student *next;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    student A,B,C,D ;
    scanf("%s%d",A.name,&A.born);
    scanf("%s%d",B.name,&B.born);
    scanf("%s%d",C.name,&C.born);
    scanf("%s%d",D.name,&D.born);
    printf("%s %d\n",A.name,A.born);
    printf("%s %d\n",B.name,B.born);
    printf("%s %d\n",C.name,C.born);
    printf("%s %d\n",D.name,D.born);
    return 0;
}
