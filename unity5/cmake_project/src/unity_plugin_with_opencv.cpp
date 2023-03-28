#include "unity_plugin_with_opencv.hpp"

#include <stdint.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>


// this function uses OpenCV to decode a blob of bytes as if it was an image, the, plops it into a byte array as RGB24 data
EXPORT_API void decode(int32_t fileSize, int8_t fileData[], int32_t imageWidth, uint8_t imageStorage[])
{
	// load the image into BGR
	cv::Mat loadedImage = cv::imdecode(std::vector<int8_t>(fileData, fileData + fileSize), CV_LOAD_IMAGE_COLOR);

	// resize the image
	cv::Mat resizedImage;
	cv::resize(loadedImage, resizedImage, cv::Size(imageWidth, imageWidth));

	// copy the image out
	int32_t out = 0;
	for (int32_t col = 0; col < imageWidth; ++col)
	{
		for (int32_t row = 0; row < imageWidth; ++row)
		{
			size_t start = 3 * ((((imageWidth - 1) - row) * imageWidth) + col);
			imageStorage[out++] = resizedImage.data[start++];
			imageStorage[out++] = resizedImage.data[start++];
			imageStorage[out++] = resizedImage.data[start++];
		}
	}
}
