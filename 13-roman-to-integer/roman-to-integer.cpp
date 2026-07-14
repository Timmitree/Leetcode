class Solution {
public:
    int romanToInt(string s) {
 
    int total[s.length()];
    int value = 0;
    int prev ;
    int totals = 0;
    for(int i= 0;i<s.length();i++){
    char symbol = s[i];
    switch (symbol){
        case 'I':
                value =1;
        break;
        case 'V':

                value =5;
            
        break;
        case 'X':
                value =10;
            
        break;
        case 'L':
                value =50;
            
        break;
        case 'C':
                value =100;
            
        break;
        case 'D':
                value =500;
            
        break;
        case 'M' :
            value=1000;
        break;
    }
    total[i] = value;
    if(i==0){
    prev=value;
    }else{
        prev= total[i-1];
    }
    if(prev<value){
        totals = totals - (prev*2);
    }
    totals +=value;
    std::cout<<totals<<endl;;
    }
    
     return totals;
    }

};