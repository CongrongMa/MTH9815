cmake_minimum_required(VERSION 3.20)
project(tradingsystem)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tradingsystem
        executionservice.hpp
        historicaldataservice.hpp
        inquiryservice.hpp
        marketdataservice.hpp
        positionservice.hpp
        pricingservice.hpp
        products.hpp
        riskservice.hpp
        soa.hpp
        streamingservice.hpp
        tradebookingservice.hpp main.cpp Bond.h++ BondPositionService.h++ BondTradeBookingService.h++ BondRiskService.h++ BondPricingService.h++ BondMarketDataService.h++ BondExecutionService.h++ BondStreamingService.h++ BondAlgoExecutionService.h++ BondAlgoStreamingService.h++ GUIService.h++ BondInquiryService.h++)
