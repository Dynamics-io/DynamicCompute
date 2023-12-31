#pragma once

#include "stdafx.h"
#include "d3dclass_test.h"

namespace DynamicCompute {
	namespace Compute {
		namespace DX {

			const bool FULL_SCREEN = false;
			const bool VSYNC_ENABLED = true;
			const float SCREEN_DEPTH = 1000.0f;
			const float SCREEN_NEAR = 0.1f;

			class GraphicsClass
			{
			public:
				GraphicsClass();
				GraphicsClass(const GraphicsClass&) {}
				~GraphicsClass();

				bool Initialize(int, int, HWND);
				void Shutdown();
				bool Frame();

			private:
				bool Render();

			private:

				D3DClass* m_Direct3D;
			};


		}
	}
}

