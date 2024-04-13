#include "network.h"
#include "mtcnn.h"
#include <time.h>

int main(int argc, char **argv)
{
    char *imagepath = argv[1];
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s [imagepath]\n", argv[0]);
        imagepath = "res/4.jpg";
    }

    Mat image = imread(imagepath);
    mtcnn find(image.rows, image.cols);
    clock_t start;
    start = clock();
    find.findFace(image);
    imshow("result", image);
    imwrite("result.jpg", image);
    start = clock() - start;
    cout << "time is  " << start / 10e3 << endl;

    waitKey(0);
    image.release();
    return 0;
}