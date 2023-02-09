#include <bits/stdc++.h>
using namespace std;

int prime(int num){
int root;
root = sqrt(num);

if(num<2){
	return 0;
}
else if(num==2){
	return 1;
}
else if(num%2==0){
	return 0;
}
else{
   for(int i=3; i<=root; i++){
   if(num%i==0){
	return 0;
   }

}
}

return 1;
}

int main(){

int n, result;
cin>>n;
result = prime(n);

if(result){
	cout<<"Prime Number";
} else{
   cout<<"Not prime Number";
}

}
