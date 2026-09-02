int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxWater = 0;

    while (left < right) {
        int width = right - left;

        int h;
        if (height[left] < height[right])
            h = height[left];
        else
            h = height[right];

        int area = width * h;

        if (area > maxWater)
            maxWater = area;

        // Move the smaller height pointer
        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return maxWater;
}