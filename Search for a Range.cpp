vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int size = A.size();
    int first,last;
    int i = 0;
    while(i < size){
        int mid = (i+size)/2;
        if(A[mid] == B){
            if(A[mid-1] == B){
                size = mid-1;
            }
            else{
                first = mid;
            }
        }
        else{
            size = mid-1;
        }
    }
    i = 0;
    size = A.size();
    while(i < size){
        int mid = (i+size)/2;
        if(A[mid] == B){
            if(A[mid+1] == B){
                i = mid+1;
            }
            else{
                last = mid;
            }
        }
        else{
            i = mid+1;
        }
    }
    vector<int> D;
    D.push_back(first);
    D.push_back(last);
}

