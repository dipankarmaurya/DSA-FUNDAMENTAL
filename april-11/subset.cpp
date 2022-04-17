string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,bool>isVis;
    
    for(int i=0;i<n;i++){
        isVis[a1[i]]=true;
    }
    
   for(int i=0;i<m;i++){
        if(isVis[a2[i]]!=true)
           return "No";
    }
    
    return "Yes";
}