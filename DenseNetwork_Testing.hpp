#pragma once

#include "TestRegistry.hpp"
#include "TestRunner.hpp"
#include "TestResult.hpp"

#include "DenseNetwork.hpp"
#include "IntegerArray.hpp"

namespace pankey{

	namespace Library{

		namespace AI{

			void DenseNetwork_Testing_1(pankey::Utility::Test::TestResult& a_result){
				IntegerArray i_array = createIntegerArray(5, 20, 20, 3);
				DenseNetwork i_network = i_array;
				int i_initial_index = i_network.initialIndex();
				int i_layer_length = i_network.layerLength();
				int i_neuron_length_0 = i_network.neuronLength(0);
				int i_neuron_length_1 = i_network.neuronLength(1);
				int i_neuron_length_2 = i_network.neuronLength(2);
				int i_neuron_length_3 = i_network.neuronLength(3);
				a_result.assertEqual(0, "DenseNetwork initial index", i_initial_index, 0);
				a_result.assertEqual(1, "DenseNetwork layer length", i_layer_length, 4);
				a_result.assertEqual(2, "DenseNetwork neuron length 0", i_neuron_length_0, 5);
				a_result.assertEqual(3, "DenseNetwork neuron length 1", i_neuron_length_1, 20);
				a_result.assertEqual(4, "DenseNetwork neuron length 2", i_neuron_length_2, 20);
				a_result.assertEqual(5, "DenseNetwork neuron length 3", i_neuron_length_3, 3);
			}

			void DenseNetwork_Testing_2(pankey::Utility::Test::TestResult& a_result){
				
			}

			void DenseNetwork_Testing(pankey::Utility::Test::TestRunner& a_runner){
				a_runner.test("DenseNetwork initial index and neuron lengths", DenseNetwork_Testing_1);
				a_runner.test("DenseNetwork", DenseNetwork_Testing_2);
			}

			PANKEY_TEST_REGISTER(DenseNetwork_Testing)

		}

	}

}


