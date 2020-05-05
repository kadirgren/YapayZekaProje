#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,k,v,b,e ; //lokasyonlarin uzakliklarini kaydetmek için kullanilan kisaltmalar.
   printf("Manava olan uzakligi giriniz:");
   scanf("%d",&m);
   printf("Kasaba olan uzakligi giriniz:");
   scanf("%d",&k);
   printf("Veterinere olan uzakligi giriniz:");
   scanf("%d",&v);
   printf("Bakkala olan uzakligi giriniz:");
   scanf("%d",&b);
   printf("Eczaneye olan uzakligi giriniz:");
   scanf("%d",&e);
   if(m+k<m+v){
    printf("En kisa yol icin manav ve kasaptan gecmeli");//
   }
   else if(m+k<m+b){
    printf("En kisa yol icin manav ve kasaptan gecmeli");
   }
   else if(m+k<m+e){
    printf("En kisa yol icin manav ve kasaptan gecmeli");
   }
   else if(m+k<k+v){
    printf("En kisa yol icin manav ve kasaptan gecmeli");
   }
   else if(m+k<k+b){
    printf("En kisa yol icin manav ve kasaptan gecmeli");
   }
   else if(m+k<k+e){
    printf("En kisa yol icin manav ve kasaptan gecmeli");
   }
   else if(m+k<v+b){
    printf("En kisa yol icin manav ve kasaptan gecmeli");
   }
   else if(m+k<v+e){
    printf("En kisa yol icin manav ve kasaptan gecmeli");
   }
   else if(m+k<b+e){
    printf("En kisa yol icin manav ve kasaptan gecmeli");
   }
   else if(m+v<m+k){
    printf("En kisa yol icin manav ve veterinerden gecmeli");//
   }
   else if(m+v<m+b){
    printf("En kisa yol icin manav ve veterinerden gecmeli");
   }
   else if(m+v<m+e){
    printf("En kisa yol icin manav ve veterinerden gecmeli");
   }
   else if(m+v<k+v){
    printf("En kisa yol icin manav ve veterinerden gecmeli");
   }
   else if(m+v<k+b){
    printf("En kisa yol icin manav ve veterinerden gecmeli");
   }
   else if(m+v<k+e){
    printf("En kisa yol icin manav ve veterinerden gecmeli");
   }
   else if(m+v<v+b){
    printf("En kisa yol icin manav ve veterinerden gecmeli");
   }
   else if(m+v<v+e){
    printf("En kisa yol icin manav ve veterinerden gecmeli");
   }
   else if(m+v<b+e){
    printf("En kisa yol icin manav ve veterinerden gecmeli");
   }
   else if(m+b<m+k){
    printf("En kisa yol icin manav ve bakkaldan gecmeli");//
   }
   else if(m+b<m+v){
    printf("En kisa yol icin manav ve bakkaldan gecmeli");
   }
   else if(m+b<m+e){
    printf("En kisa yol icin manav ve bakkaldan gecmeli");
   }
   else if(m+b<k+v){
    printf("En kisa yol icin manav ve bakkaldan gecmeli");
   }
    else if(m+b<k+b){
    printf("En kisa yol icin manav ve bakkaldan gecmeli");
   }
   else if(m+b<k+e){
    printf("En kisa yol icin manav ve bakkaldan gecmeli");
   }
   else if(m+b<v+b){
    printf("En kisa yol icin manav ve bakkaldan gecmeli");
   }
   else if(m+b<v+e){
    printf("En kisa yol icin manav ve bakkaldan gecmeli");
   }
   else if(m+e<m+k){
    printf("En kisa yol icin manav ve eczaneden gecmeli"); //
   }
   else if(m+e<m+v){
    printf("En kisa yol icin manav ve eczaneden gecmeli");
   }
   else if(m+e<m+b){
    printf("En kisa yol icin manav ve eczaneden gecmeli");
   }
   else if(m+e<k+v){
    printf("En kisa yol icin manav ve eczaneden gecmeli");
   }
   else if(m+e<k+b){
    printf("En kisa yol icin manav ve eczaneden gecmeli");
   }
   else if(m+e<k+e){
    printf("En kisa yol icin manav ve eczaneden gecmeli");
   }
   else if(m+e<v+b){
    printf("En kisa yol icin manav ve eczaneden gecmeli");
   }
   else if(m+e<v+e){
    printf("En kisa yol icin manav ve eczaneden gecmeli");
   }
   else if(k+v<m+k){
    printf("En kisa yol icin kasap ve veterinerden gecmeli"); //
   }
   else if(k+v<m+v){
    printf("En kisa yol icin kasap ve veterinerden gecmeli");
   }
    else if(k+v<m+b){
    printf("En kisa yol icin kasap ve veterinerden gecmeli");
   }
    else if(k+v<m+e){
    printf("En kisa yol icin kasap ve veterinerden gecmeli");
   }
    else if(k+v<k+b){
    printf("En kisa yol icin kasap ve veterinerden gecmeli");
   }
    else if(k+v<k+e){
    printf("En kisa yol icin kasap ve veterinerden gecmeli");
   }
    else if(k+v<v+b){
    printf("En kisa yol icin kasap ve veterinerden gecmeli");
   }
    else if(k+v<v+e){
    printf("En kisa yol icin kasap ve veterinerden gecmeli");
   }
    else if(k+b<m+k){
    printf("En kisa yol icin kasap ve bakkaldan gecmeli"); //
   }
   else if(k+b<m+v){
    printf("En kisa yol icin kasap ve bakkaldan gecmeli");
   }
   else if(k+b<m+b){
    printf("En kisa yol icin kasap ve bakkaldan gecmeli");
   }
   else if(k+b<m+e){
    printf("En kisa yol icin kasap ve bakkaldan gecmeli");
   }
   else if(k+b<k+v){
    printf("En kisa yol icin kasap ve bakkaldan gecmeli");
   }
   else if(k+b<k+e){
    printf("En kisa yol icin kasap ve bakkaldan gecmeli");
   }
   else if(k+b<v+b){
    printf("En kisa yol icin kasap ve bakkaldan gecmeli");
   }
   else if(k+b<v+e){
    printf("En kisa yol icin kasap ve bakkaldan gecmeli");
   }
   else if(k+e<m+k){
    printf("En kisa yol icin kasap ve eczaneden gecmeli"); //
   }
   else if(k+e<m+v){
    printf("En kisa yol icin kasap ve eczaneden gecmeli");
   }
   else if(k+e<m+b){
    printf("En kisa yol icin kasap ve eczaneden gecmeli");
   }
   else if(k+e<m+e){
    printf("En kisa yol icin kasap ve eczaneden gecmeli");
   }
   else if(k+e<k+v){
    printf("En kisa yol icin kasap ve eczaneden gecmeli");
   }
   else if(k+e<k+b){
    printf("En kisa yol icin kasap ve eczaneden gecmeli");
   }
   else if(k+e<v+b){
    printf("En kisa yol icin kasap ve eczaneden gecmeli");
   }
   else if(k+e<v+e){
    printf("En kisa yol icin kasap ve eczaneden gecmeli");
   }
   else if(v+b<m+k){
    printf("En kisa yol icin veteriner ve bakkaldan gecmeli"); //
   }
    else if(v+b<m+v){
    printf("En kisa yol icin veteriner ve bakkaldan gecmeli");
   }
    else if(v+b<m+b){
    printf("En kisa yol icin veteriner ve bakkaldan gecmeli");
   }
    else if(v+b<m+e){
    printf("En kisa yol icin veteriner ve bakkaldan gecmeli");
   }
    else if(v+b<k+v){
    printf("En kisa yol icin veteriner ve bakkaldan gecmeli");
   }
    else if(v+b<k+b){
    printf("En kisa yol icin veteriner ve bakkaldan gecmeli");
   }
    else if(v+b<k+e){
    printf("En kisa yol icin veteriner ve bakkaldan gecmeli");
   }
    else if(v+b<v+e){
    printf("En kisa yol icin veteriner ve bakkaldan gecmeli");
   }
    else if(v+e<m+k){
    printf("En kisa yol icin veteriner ve eczaneden gecmeli"); //
   }
   else if(v+e<m+v){
    printf("En kisa yol icin veteriner ve eczaneden gecmeli");
   }
   else if(v+e<m+b){
    printf("En kisa yol icin veteriner ve eczaneden gecmeli");
   }
   else if(v+e<m+e){
    printf("En kisa yol icin veteriner ve eczaneden gecmeli");
   }
   else if(v+e<k+v){
    printf("En kisa yol icin veteriner ve eczaneden gecmeli");
   }
   else if(v+e<k+b){
    printf("En kisa yol icin veteriner ve eczaneden gecmeli");
   }
   else if(v+e<k+e){
    printf("En kisa yol icin veteriner ve eczaneden gecmeli");
   }
   else if (v+e<v+b){
    printf("En kisa yol icin veteriner ve eczaneden gecmeli");
   }

}
