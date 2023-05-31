#include <stdlib.h>
template <class T>
class vector {
   private:
      T *v;
      int s;
   public:
      vector(){
	     s=0;
	     v=NULL;
      }
	  
      ~vector(){
	     delete [] v;
      }
	  
      int size() {
	     return s;
      }
	  
      void push_back(T ele) {
	     T *temp;
	     temp = new T[++s];
	     for(int i=0; i<s-1; i++)
	        temp[i]=v[i];

	     delete [] v;
	     v=temp;
	     v[s-1]=ele;
      }

      vector(vector<T> &other){
        s = other.s;
	v = new T[s];
	for(int i=0; i<s; i++){
	   v[i]= other.v[i];
	}
      }

      void operator = (vector<T> &other){
        delete [] v;
        s = other.s;
	v = new T[s];
	for(int i=0; i<s; i++){
	   v[i]= other.v[i];
	}
         
      
      }
};
