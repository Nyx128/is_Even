#include <iostream>
#include <fstream>
#include <stdexcept>

int main(){
	uint32_t lines = 6999999;
	std::ofstream file;
	file.open("index.js", std::ofstream::out | std::ofstream::trunc);
	if(!file){
		throw std::runtime_error("can't open file");
	}
	else {
		file << "function isEven(number) {" << std::endl;
		file << "if(number === 1) return false" << std::endl;
		for (uint32_t i = 2; i < static_cast<uint32_t>(lines + 1); i++) {
			file << "else if(number = " << (i) << ")";
			if (i % 2 == 0) {
				file << "return true;" << std::endl;
			}
			else {
				file << "return false;" << std::endl;
			}
		}

		file << "}" << std::endl;
		file << "module.exports = isEven" << std::endl;
	}
	file.close();
}
