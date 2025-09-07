class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiag = -1;
        int bestArea = 0;

        for (auto &rect : dimensions) {
            int l = rect[0], w = rect[1];
            int diag = l * l + w * w; // squared diagonal
            int area = l * w;

            if (diag > maxDiag) {
                maxDiag = diag;
                bestArea = area;
            } else if (diag == maxDiag && area > bestArea) {
                bestArea = area;
            }
        }

        return bestArea;
    }
};
