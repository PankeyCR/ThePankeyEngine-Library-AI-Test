#pragma once

#include "TestRegistry.hpp"
#include "TestRunner.hpp"
#include "TestResult.hpp"

#include "IntegerArray.hpp"
#include "DinamicLayerNetwork.hpp"

namespace pankey{

	namespace Library{

		namespace AI{

			void DinamicLayerNetwork_Testing_1(pankey::Utility::Test::TestResult& a_result){
				DinamicLayerNetwork i_network;
			}

			void DinamicLayerNetwork_Testing_2(pankey::Utility::Test::TestResult& a_result){
				
			}

			void DinamicLayerNetwork_Testing(pankey::Utility::Test::TestRunner& a_runner){
				a_runner.test("IntegerArray isEmpty initially", DinamicLayerNetwork_Testing_1);
				a_runner.test("IntegerArray size after creation", DinamicLayerNetwork_Testing_2);
			}

			PANKEY_TEST_REGISTER(DinamicLayerNetwork_Testing)

		}

	}

}


