class Solution {
public:
    int maxArea(vector<int>& height) {
        // width = x2 - x1
        // height = min(y2, y1)
        // area = (x2-x1) * min(y2,y1)
        // maximimze minimum height of the two,
        // maximize distance between two
        
        // 1 2 4 3
        
        int max = -1;
        int start = 0;
        int end = height.size()-1;
        
        while(start < end) {
            int area = (end - start) * min(height[end], height[start]);
            if(area > max)  max = area; 
            if(height[start] < height[end]) {
                // left is the limiting
                start++;
            } else if(height[start] > height[end]) {
                end--;
            } else {
                start++;
                end--;
            }
        }
        
        
        return max;
    }
};
