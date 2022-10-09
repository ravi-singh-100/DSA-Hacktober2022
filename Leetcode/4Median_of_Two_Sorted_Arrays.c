/* Q. Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).
*/


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    
    int i,j,index=0;
    double mid,temp[2000];
    i=0;j=0;
        while((i<nums1Size)&&(j<nums2Size)){
        if(nums1[i]<=nums2[j]){
            temp[index]=nums1[i];
            i++;
        }
        
        else if(nums1[i]>nums2[j]){
            temp[index]=nums2[j];
            j++;
        }
            index++;
        
    }
         if(i>=nums1Size){
            while(j<nums2Size){
                temp[index]=nums2[j];
                j++;
                index++;   
            }
        }
        else if(j>=nums2Size){
            while(i<nums1Size){
                temp[index]=nums1[i];
                i++;
                index++;   
            }
        }
  
    if(index%2==0){    
        mid=(temp[index/2]+temp[(index/2)-1])/2;
    }
       
    else if(index%2!=0){
         mid=temp[index/2];
    }
      return mid;
   }
