#pragma once 
#include <iostream>
#include <fstream>
#include <iomanip> 
#include <filesystem>
#include "core-datetime/datetime.hpp"
#include "core-dataengine/http.hpp"
#include "core-dataengine/tools.hpp"

namespace DataFetching 
{
    class StLouisFredSOFRFixing 
    {
        public: 
            StLouisFredSOFRFixing(); 
            ~StLouisFredSOFRFixing() = default;
        
        private: 
            HTTPRequest request_;
            void writeData();
            std::string getURL() const; 
            
    };
}

