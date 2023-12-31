#pragma once

#include "std_includes.h"
#include "IComputeBuffer.h"
#include "IComputeProgram.h"

namespace DynamicCompute {
	namespace Compute {

		class IComputeController {
			friend class ComputeInterface;
		public:

			void Init(Platform platform, void* device, std::string program_dir);
			
			IComputeProgram* AddProgram(IComputeProgram::ProgramInfo& info);
			
			IComputeProgram* GetProgram(std::string name);
			
			IComputeBuffer* NewReadBuffer(size_t numElements, size_t stride);
			
			IComputeBuffer* NewWriteBuffer(size_t numElements, size_t stride);
			
			IComputeBuffer* NewReadWriteBuffer(size_t numElements, size_t stride);
			
			void Dispose();

		private:

			IComputeController(IComputeController_private* p) { p_inst = p; }

			IComputeController_private* p_inst;

		};

	}
}