
#pragma once

#include <complex>
#include <vector>

namespace kvak {

class agc {
public:
					agc(unsigned int nchannels);

	void push_samples(std::complex<float> *data, size_t nchunks);
	float get_channel_power(unsigned int channel);

private:
	void process_chunk(std::complex<float> *data);

	unsigned int nchannels;
	std::vector<float> gains;
};

}
