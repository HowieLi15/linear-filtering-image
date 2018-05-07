# linear-filtering-image
as title
--------------------------------
#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;
int main()
{
	Mat lc = imread("C:\\Users\\64166\\Pictures\\Saved Pictures\\shiyan.jpg");
	Mat ou;
	boxFilter(lc, ou, -1, Size(3, 3));
	 imshow("smooth",ou);
	 waitKey();
	 int a = lc.rows;
	 int b = lc.cols*lc.channels();
	 for ( int i = 0; i < a; i++)
	 {
		 uchar *p = ou.ptr(i);
		 uchar *p2 = lc.ptr(i);
		 for (int j = 0; j < b; j++)
		 {
			 p[j] = p2[j] - p[j];
			 p2[j] = p2[j] + p[j];

		 }

	 }
	 imshow("sharpen",lc );
	 waitKey();
}
