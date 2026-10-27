#pragma once

#include "TestRegistry.hpp"
#include "TestRunner.hpp"
#include "TestResult.hpp"

#include "BrainPolicy.hpp"
#include "Brain.hpp"

namespace pankey{

	namespace Library{

		namespace AI{

			void Brain_Testing_1(pankey::Utility::Test::TestResult& a_result){
				Brain<BrainPolicy> i_brain;
				i_brain.create(10, 5, 20, 10);
				a_result.assertEqual(0, "Brain creation test", i_brain.m_weights.length(), 20);
				a_result.assertEqual(1, "Brain creation test", i_brain.m_light_weights.length(), 10);
				a_result.assertEqual(2, "Brain creation test", i_brain.m_biases.length(), 10);
				a_result.assertEqual(3, "Brain creation test", i_brain.m_light_biases.length(), 5);
				a_result.assertEqual(4, "Brain creation test", i_brain.m_activations.length(), 10);
				a_result.assertEqual(5, "Brain creation test", i_brain.m_light_activations.length(), 5);
				a_result.assertEqual(6, "Brain creation test", i_brain.m_activation_deltas.length(), 10);
				a_result.assertEqual(7, "Brain creation test", i_brain.m_light_activation_deltas.length(), 5);
			}

			void Brain_Testing_2(pankey::Utility::Test::TestResult& a_result){
				Brain<BrainPolicy> i_brain;
				i_brain.create(10, 5, 20, 10);
				
			}

			void Brain_Testing(pankey::Utility::Test::TestRunner& a_runner){
				a_runner.test("Brain creation test", Brain_Testing_1);
				a_runner.test("Brain creation test 2", Brain_Testing_2);
			}

			PANKEY_TEST_REGISTER(Brain_Testing)

		}

	}

}


