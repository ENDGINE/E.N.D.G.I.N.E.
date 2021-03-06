///////////////////////////////////
// Filename: TextureShader.hpp
//
// Author: Wolfe S. Greene
///////////////////////////////////

////////////////////////////////
// Pre-processor Directives
//------------------------------
#pragma once

///////////////////////////////
// Include Headers
//-----------------------------
#include "ShaderObject.hpp"

////////////////////////////////////
// Class Declaration
//----------------------------------
class TextureShader :
	public ShaderObject
{
	Microsoft::WRL::ComPtr<ID3D11SamplerState> m_textureSampler;

public:
	TextureShader(CONST Microsoft::WRL::ComPtr<ID3D11Device>& device,
				  CONST Microsoft::WRL::ComPtr<ID3D11DeviceContext>& deviceContext);

	~TextureShader() = default;

	bool Initialize();

	bool Render(int indexCount,
				CONST DirectX::XMMATRIX& worldMatrix,
				CONST DirectX::XMMATRIX& viewMatrix,
				CONST DirectX::XMMATRIX& projectionMatrix,
				CONST Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>& texture);
};

