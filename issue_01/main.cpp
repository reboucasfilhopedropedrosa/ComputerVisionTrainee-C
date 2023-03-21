#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv/cvaux.h>
#include <opencv/cxcore.h>
#include <opencv/ml.h>
#include <stdlib.h>
#include <stdio.h>
using namespace cv;
using namespace std;


Mat img_rgb;

int main()
{
    img_rgb = imread ("/Users/pedropedrosa/Documents/VSCode/PDI_Trainee_C_Language-master/issue_01/arara.jpg",1);
    
    namedWindow("Arara",CV_WINDOW_AUTOSIZE);
    imshow("Arara", img_rgb);
    
    imwrite("/Users/pedropedrosa/Documents/VSCode/PDI_Trainee_C_Language-master/issue_01/Results/Original Image.jpg", img_rgb);
    
    waitKey(0);
    
}
