#pragma once

class IMaterial
{
public:
	virtual const char* GetName() const = 0;
	virtual const char* GetTextureGroupName() const = 0;

	void AlphaModulate(float alpha)
	{
		CallVFunction<void(__thiscall*)(void*, float)>(this, 27)(this, alpha);
	}

	void ColorModulate(float r, float g, float b)
	{
		CallVFunction<void(__thiscall*)(void*, float, float, float)>(this, 28)(this, r, g, b);
	}

	void SetMaterialVarFlag(EMaterialVarFlag flag, bool on)
	{
		CallVFunction<void(__thiscall*)(void*, EMaterialVarFlag, bool)>(this, 29)(this, flag, on);
	}

	bool GetMaterialVarFlag(EMaterialVarFlag flag)
	{
		return CallVFunction<bool(__thiscall*)(void*, EMaterialVarFlag)>(this, 30)(this, flag);
	}
};