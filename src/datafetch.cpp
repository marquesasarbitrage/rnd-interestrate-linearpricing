#include "../include/rnd-interestrate-linearpricing/datafetch.hpp"

namespace DataFetching 
{
    StLouisFredSOFRFixing::StLouisFredSOFRFixing(): request_(HTTPRequest(getURL())){writeData();}; 

    std::string StLouisFredSOFRFixing::getURL() const
    {   
        std::string key_ = DataEngineTools::DotEnv("build").getVariable("APIKEY_ST_LOUIS_FRED"); 
        return "https://api.stlouisfed.org/fred/series/observations?series_id=SOFR&api_key="+key_+"&file_type=json";
    }

    void StLouisFredSOFRFixing::writeData() const
    {
        std::filesystem::create_directory("data");
        std::ofstream file("data/stlouisfred-sofr-fixing.csv");
        if (!file.is_open()) {
            std::cerr << "Error: could not open file." << std::endl;
        }
        file << "date,fixingRate,\n";
        nlohmann::json data = request_.getData();

        for (const auto& obs : data["observations"]) {
            file << obs["date"].get<std::string>() << "," << obs["value"].get<double>() << "," << "\n";
        }

        file.close();

    }
}