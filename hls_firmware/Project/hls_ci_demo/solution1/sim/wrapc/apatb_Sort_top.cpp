// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "a_0"
#define AUTOTB_TVIN_a_0  "../tv/cdatafile/c.Sort_top.autotvin_a_0.dat"
// wrapc file define: "a_1"
#define AUTOTB_TVIN_a_1  "../tv/cdatafile/c.Sort_top.autotvin_a_1.dat"
// wrapc file define: "a_2"
#define AUTOTB_TVIN_a_2  "../tv/cdatafile/c.Sort_top.autotvin_a_2.dat"
// wrapc file define: "a_3"
#define AUTOTB_TVIN_a_3  "../tv/cdatafile/c.Sort_top.autotvin_a_3.dat"
// wrapc file define: "a_4"
#define AUTOTB_TVIN_a_4  "../tv/cdatafile/c.Sort_top.autotvin_a_4.dat"
// wrapc file define: "b_0"
#define AUTOTB_TVOUT_b_0  "../tv/cdatafile/c.Sort_top.autotvout_b_0.dat"
// wrapc file define: "b_1"
#define AUTOTB_TVOUT_b_1  "../tv/cdatafile/c.Sort_top.autotvout_b_1.dat"
// wrapc file define: "b_2"
#define AUTOTB_TVOUT_b_2  "../tv/cdatafile/c.Sort_top.autotvout_b_2.dat"
// wrapc file define: "b_3"
#define AUTOTB_TVOUT_b_3  "../tv/cdatafile/c.Sort_top.autotvout_b_3.dat"
// wrapc file define: "b_4"
#define AUTOTB_TVOUT_b_4  "../tv/cdatafile/c.Sort_top.autotvout_b_4.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "b_0"
#define AUTOTB_TVOUT_PC_b_0  "../tv/rtldatafile/rtl.Sort_top.autotvout_b_0.dat"
// tvout file define: "b_1"
#define AUTOTB_TVOUT_PC_b_1  "../tv/rtldatafile/rtl.Sort_top.autotvout_b_1.dat"
// tvout file define: "b_2"
#define AUTOTB_TVOUT_PC_b_2  "../tv/rtldatafile/rtl.Sort_top.autotvout_b_2.dat"
// tvout file define: "b_3"
#define AUTOTB_TVOUT_PC_b_3  "../tv/rtldatafile/rtl.Sort_top.autotvout_b_3.dat"
// tvout file define: "b_4"
#define AUTOTB_TVOUT_PC_b_4  "../tv/rtldatafile/rtl.Sort_top.autotvout_b_4.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			a_0_depth = 0;
			a_1_depth = 0;
			a_2_depth = 0;
			a_3_depth = 0;
			a_4_depth = 0;
			b_0_depth = 0;
			b_1_depth = 0;
			b_2_depth = 0;
			b_3_depth = 0;
			b_4_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{a_0 " << a_0_depth << "}\n";
			total_list << "{a_1 " << a_1_depth << "}\n";
			total_list << "{a_2 " << a_2_depth << "}\n";
			total_list << "{a_3 " << a_3_depth << "}\n";
			total_list << "{a_4 " << a_4_depth << "}\n";
			total_list << "{b_0 " << b_0_depth << "}\n";
			total_list << "{b_1 " << b_1_depth << "}\n";
			total_list << "{b_2 " << b_2_depth << "}\n";
			total_list << "{b_3 " << b_3_depth << "}\n";
			total_list << "{b_4 " << b_4_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int a_0_depth;
		int a_1_depth;
		int a_2_depth;
		int a_3_depth;
		int a_4_depth;
		int b_0_depth;
		int b_1_depth;
		int b_2_depth;
		int b_3_depth;
		int b_4_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void Sort_top (
int a[5],
int b[5]);

void AESL_WRAP_Sort_top (
int a[5],
int b[5])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "b_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_b_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_b_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_b_0, AESL_token); // data

			sc_bv<32> *b_0_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					b_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_b_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_b_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: b_0
				{
					// bitslice(31, 0)
					// {
						// celement: b(31, 0)
						// {
							sc_lv<32>* b_lv0_0_0_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b_lv0_0_0_2[hls_map_index].range(31, 0) = sc_bv<32>(b_0_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : b[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : b[0]
								// output_left_conversion : b[i_0]
								// output_type_conversion : (b_lv0_0_0_2[hls_map_index]).to_uint64()
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b[i_0] = (b_lv0_0_0_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] b_0_pc_buffer;
		}

		// output port post check: "b_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_b_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_b_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_b_1, AESL_token); // data

			sc_bv<32> *b_1_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					b_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_b_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_b_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: b_1
				{
					// bitslice(31, 0)
					// {
						// celement: b(31, 0)
						// {
							sc_lv<32>* b_lv0_1_1_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b_lv0_1_1_2[hls_map_index].range(31, 0) = sc_bv<32>(b_1_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : b[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : b[0]
								// output_left_conversion : b[i_0]
								// output_type_conversion : (b_lv0_1_1_2[hls_map_index]).to_uint64()
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b[i_0] = (b_lv0_1_1_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] b_1_pc_buffer;
		}

		// output port post check: "b_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_b_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_b_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_b_2, AESL_token); // data

			sc_bv<32> *b_2_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					b_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_b_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_b_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: b_2
				{
					// bitslice(31, 0)
					// {
						// celement: b(31, 0)
						// {
							sc_lv<32>* b_lv0_2_2_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b_lv0_2_2_2[hls_map_index].range(31, 0) = sc_bv<32>(b_2_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : b[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : b[0]
								// output_left_conversion : b[i_0]
								// output_type_conversion : (b_lv0_2_2_2[hls_map_index]).to_uint64()
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b[i_0] = (b_lv0_2_2_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] b_2_pc_buffer;
		}

		// output port post check: "b_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_b_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_b_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_b_3, AESL_token); // data

			sc_bv<32> *b_3_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					b_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_b_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_b_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: b_3
				{
					// bitslice(31, 0)
					// {
						// celement: b(31, 0)
						// {
							sc_lv<32>* b_lv0_3_3_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b_lv0_3_3_2[hls_map_index].range(31, 0) = sc_bv<32>(b_3_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : b[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : b[0]
								// output_left_conversion : b[i_0]
								// output_type_conversion : (b_lv0_3_3_2[hls_map_index]).to_uint64()
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b[i_0] = (b_lv0_3_3_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] b_3_pc_buffer;
		}

		// output port post check: "b_4"
		aesl_fh.read(AUTOTB_TVOUT_PC_b_4, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_b_4, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_b_4, AESL_token); // data

			sc_bv<32> *b_4_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'b_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					b_4_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_b_4, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_b_4))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: b_4
				{
					// bitslice(31, 0)
					// {
						// celement: b(31, 0)
						// {
							sc_lv<32>* b_lv0_4_4_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b_lv0_4_4_2[hls_map_index].range(31, 0) = sc_bv<32>(b_4_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: b(31, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : b[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : b[0]
								// output_left_conversion : b[i_0]
								// output_type_conversion : (b_lv0_4_4_2[hls_map_index]).to_uint64()
								if (&(b[0]) != NULL) // check the null address if the c port is array or others
								{
									b[i_0] = (b_lv0_4_4_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] b_4_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "a_0"
		char* tvin_a_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_0);

		// "a_1"
		char* tvin_a_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_1);

		// "a_2"
		char* tvin_a_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_2);

		// "a_3"
		char* tvin_a_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_3);

		// "a_4"
		char* tvin_a_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_4);

		// "b_0"
		char* tvout_b_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_b_0);

		// "b_1"
		char* tvout_b_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_b_1);

		// "b_2"
		char* tvout_b_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_b_2);

		// "b_3"
		char* tvout_b_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_b_3);

		// "b_4"
		char* tvout_b_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_b_4);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_a_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_0, tvin_a_0);

		sc_bv<32>* a_0_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: a_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: a(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : a[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : a[0]
						// regulate_c_name       : a
						// input_type_conversion : a[i_0]
						if (&(a[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> a_tmp_mem;
							a_tmp_mem = a[i_0];
							a_0_tvin_wrapc_buffer[hls_map_index].range(31, 0) = a_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_a_0, "%s\n", (a_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_0, tvin_a_0);
		}

		tcl_file.set_num(1, &tcl_file.a_0_depth);
		sprintf(tvin_a_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_0, tvin_a_0);

		// release memory allocation
		delete [] a_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_1, tvin_a_1);

		sc_bv<32>* a_1_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: a_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: a(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : a[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : a[0]
						// regulate_c_name       : a
						// input_type_conversion : a[i_0]
						if (&(a[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> a_tmp_mem;
							a_tmp_mem = a[i_0];
							a_1_tvin_wrapc_buffer[hls_map_index].range(31, 0) = a_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_a_1, "%s\n", (a_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_1, tvin_a_1);
		}

		tcl_file.set_num(1, &tcl_file.a_1_depth);
		sprintf(tvin_a_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_1, tvin_a_1);

		// release memory allocation
		delete [] a_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_2, tvin_a_2);

		sc_bv<32>* a_2_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: a_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: a(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : a[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : a[0]
						// regulate_c_name       : a
						// input_type_conversion : a[i_0]
						if (&(a[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> a_tmp_mem;
							a_tmp_mem = a[i_0];
							a_2_tvin_wrapc_buffer[hls_map_index].range(31, 0) = a_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_a_2, "%s\n", (a_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_2, tvin_a_2);
		}

		tcl_file.set_num(1, &tcl_file.a_2_depth);
		sprintf(tvin_a_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_2, tvin_a_2);

		// release memory allocation
		delete [] a_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_3, tvin_a_3);

		sc_bv<32>* a_3_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: a_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: a(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : a[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : a[0]
						// regulate_c_name       : a
						// input_type_conversion : a[i_0]
						if (&(a[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> a_tmp_mem;
							a_tmp_mem = a[i_0];
							a_3_tvin_wrapc_buffer[hls_map_index].range(31, 0) = a_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_a_3, "%s\n", (a_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_3, tvin_a_3);
		}

		tcl_file.set_num(1, &tcl_file.a_3_depth);
		sprintf(tvin_a_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_3, tvin_a_3);

		// release memory allocation
		delete [] a_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_4, tvin_a_4);

		sc_bv<32>* a_4_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: a_4
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: a(31, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : a[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : a[0]
						// regulate_c_name       : a
						// input_type_conversion : a[i_0]
						if (&(a[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> a_tmp_mem;
							a_tmp_mem = a[i_0];
							a_4_tvin_wrapc_buffer[hls_map_index].range(31, 0) = a_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_a_4, "%s\n", (a_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_4, tvin_a_4);
		}

		tcl_file.set_num(1, &tcl_file.a_4_depth);
		sprintf(tvin_a_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_4, tvin_a_4);

		// release memory allocation
		delete [] a_4_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		Sort_top(a, b);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_b_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_b_0, tvout_b_0);

		sc_bv<32>* b_0_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: b_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: b(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : b[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : b[0]
						// regulate_c_name       : b
						// input_type_conversion : b[i_0]
						if (&(b[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> b_tmp_mem;
							b_tmp_mem = b[i_0];
							b_0_tvout_wrapc_buffer[hls_map_index].range(31, 0) = b_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_b_0, "%s\n", (b_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_b_0, tvout_b_0);
		}

		tcl_file.set_num(1, &tcl_file.b_0_depth);
		sprintf(tvout_b_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_b_0, tvout_b_0);

		// release memory allocation
		delete [] b_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_b_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_b_1, tvout_b_1);

		sc_bv<32>* b_1_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: b_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: b(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : b[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : b[0]
						// regulate_c_name       : b
						// input_type_conversion : b[i_0]
						if (&(b[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> b_tmp_mem;
							b_tmp_mem = b[i_0];
							b_1_tvout_wrapc_buffer[hls_map_index].range(31, 0) = b_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_b_1, "%s\n", (b_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_b_1, tvout_b_1);
		}

		tcl_file.set_num(1, &tcl_file.b_1_depth);
		sprintf(tvout_b_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_b_1, tvout_b_1);

		// release memory allocation
		delete [] b_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_b_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_b_2, tvout_b_2);

		sc_bv<32>* b_2_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: b_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: b(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : b[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : b[0]
						// regulate_c_name       : b
						// input_type_conversion : b[i_0]
						if (&(b[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> b_tmp_mem;
							b_tmp_mem = b[i_0];
							b_2_tvout_wrapc_buffer[hls_map_index].range(31, 0) = b_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_b_2, "%s\n", (b_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_b_2, tvout_b_2);
		}

		tcl_file.set_num(1, &tcl_file.b_2_depth);
		sprintf(tvout_b_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_b_2, tvout_b_2);

		// release memory allocation
		delete [] b_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_b_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_b_3, tvout_b_3);

		sc_bv<32>* b_3_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: b_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: b(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : b[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : b[0]
						// regulate_c_name       : b
						// input_type_conversion : b[i_0]
						if (&(b[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> b_tmp_mem;
							b_tmp_mem = b[i_0];
							b_3_tvout_wrapc_buffer[hls_map_index].range(31, 0) = b_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_b_3, "%s\n", (b_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_b_3, tvout_b_3);
		}

		tcl_file.set_num(1, &tcl_file.b_3_depth);
		sprintf(tvout_b_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_b_3, tvout_b_3);

		// release memory allocation
		delete [] b_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_b_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_b_4, tvout_b_4);

		sc_bv<32>* b_4_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: b_4
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: b(31, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : b[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : b[0]
						// regulate_c_name       : b
						// input_type_conversion : b[i_0]
						if (&(b[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> b_tmp_mem;
							b_tmp_mem = b[i_0];
							b_4_tvout_wrapc_buffer[hls_map_index].range(31, 0) = b_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_b_4, "%s\n", (b_4_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_b_4, tvout_b_4);
		}

		tcl_file.set_num(1, &tcl_file.b_4_depth);
		sprintf(tvout_b_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_b_4, tvout_b_4);

		// release memory allocation
		delete [] b_4_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "a_0"
		delete [] tvin_a_0;
		// release memory allocation: "a_1"
		delete [] tvin_a_1;
		// release memory allocation: "a_2"
		delete [] tvin_a_2;
		// release memory allocation: "a_3"
		delete [] tvin_a_3;
		// release memory allocation: "a_4"
		delete [] tvin_a_4;
		// release memory allocation: "b_0"
		delete [] tvout_b_0;
		// release memory allocation: "b_1"
		delete [] tvout_b_1;
		// release memory allocation: "b_2"
		delete [] tvout_b_2;
		// release memory allocation: "b_3"
		delete [] tvout_b_3;
		// release memory allocation: "b_4"
		delete [] tvout_b_4;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

