#pragma once

#include "TestRegistry.hpp"
#include "TestRunner.hpp"
#include "TestResult.hpp"

#include "IntegerArray.hpp"

namespace pankey{

	namespace Library{

		namespace AI{

			void DinamicNeuronNetwork_Testing_1(pankey::Utility::Test::TestResult& a_result){
				
			}

			void DinamicNeuronNetwork_Testing_2(pankey::Utility::Test::TestResult& a_result){
				
			}

			void DinamicNeuronNetwork_Testing(pankey::Utility::Test::TestRunner& a_runner){
				a_runner.test("IntegerArray isEmpty initially", DinamicNeuronNetwork_Testing_1);
				a_runner.test("IntegerArray size after creation", DinamicNeuronNetwork_Testing_2);
			}

			PANKEY_TEST_REGISTER(DinamicNeuronNetwork_Testing)

		}

	}

}


