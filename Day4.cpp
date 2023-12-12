LINK-->void add_value(map<int,int> &m,int x,int y)
Q.C++ STL | Set 3 (map
  
code-->
{
    //Your code here
    m[x]=y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
  //Your code here
    if(m.find(x)==m.cend()){
      return -1;
}
    else{
        return m[x];
    }
  
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
   //Your code here
   for(auto i:m){
       cout<<i.first<<" "<<i.second<<" ";
   }
   
}

