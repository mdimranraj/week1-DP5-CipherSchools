#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstOccurence(vector<int> &nums, int start, int end, int target){
    if(start < end){
        return -1;
    }
    else if(start == end){
        return (nums[start] == target ? start : -1);
    }
    else{
        int mid = start + (end - start)/2;
        if(nums[mid] < target){
            return firstOccurence(nums, mid + 1, end, target);
        }
        else if(nums[mid] > target){
            return firstOccurence(nums, start, mid - 1, target);
        }
        else{
            if(mid == 0)
                return mid;
            if(mid >= 1 && nums[mid - 1] < nums[mid]){
                return mid;
            }

            return firstOccurence(nums, start, mid -1, target);
        }

    }
}
int lastOccurence(vector<int> &nums, int start, int end, int target){
       if(start > end){
        return -1;
    }
    else if(start == end){
        return (nums[start] == target ? start : -1);
    }
    else{
        int mid = start + (end - start)/2;
        if(nums[mid] < target){
            return lastOccurence(nums, mid + 1, end, target);
        }
        else if(nums[mid] > target){
            return lastOccurence(nums, start, mid - 1, target);
        }
        else{
            if(mid == end)
                return mid;
            if(mid + 1 <= end && nums[mid] < nums[mid + 1]){
                return mid;
            }

            return lastOccurence(nums, mid + 1, end, target);
        }

    }
}

vector<int> firstAndLastOccurence(vector<int> &nums, int target){
    int first = firstOccurence(nums, 0, nums.size() -1, target);
    int last = lastOccurence(nums, 0 , nums.size() -1, target);
    return {first, last};
}


int main(){


    return 0;
}



