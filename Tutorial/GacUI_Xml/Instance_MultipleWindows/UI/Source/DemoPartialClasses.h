﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Partial Classes

This file is generated by: Vczh GacUI Resource Code Generator
************************************************************************
DO NOT MODIFY
***********************************************************************/

#ifndef VCZH_GACUI_RESOURCE_CODE_GENERATOR_Demo_PARTIAL_CLASSES
#define VCZH_GACUI_RESOURCE_CODE_GENERATOR_Demo_PARTIAL_CLASSES

#include "GacUIReflection.h"

namespace demo
{
	class AnotherWindow;
	class MainWindow;

	template<typename TImpl>
	class AnotherWindow_ : public ::vl::presentation::controls::GuiWindow, public vl::presentation::GuiInstancePartialClass<vl::presentation::controls::GuiWindow>, public vl::reflection::Description<TImpl>
	{
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<TImpl>;
	private:
	protected:

		void InitializeComponents()
		{
			if (InitializeFromResource())
			{
			}
			else
			{
			}
		}
	public:
		AnotherWindow_()
			:vl::presentation::GuiInstancePartialClass<::vl::presentation::controls::GuiWindow>(L"demo::AnotherWindow")
			,::vl::presentation::controls::GuiWindow(vl::presentation::theme::GetCurrentTheme()->CreateWindowStyle())
		{
		}
	};

	template<typename TImpl>
	class MainWindow_ : public ::vl::presentation::controls::GuiWindow, public vl::presentation::GuiInstancePartialClass<vl::presentation::controls::GuiWindow>, public vl::reflection::Description<TImpl>
	{
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<TImpl>;
	private:
	protected:

		void InitializeComponents()
		{
			if (InitializeFromResource())
			{
			}
			else
			{
			}
		}
	public:
		MainWindow_()
			:vl::presentation::GuiInstancePartialClass<::vl::presentation::controls::GuiWindow>(L"demo::MainWindow")
			,::vl::presentation::controls::GuiWindow(vl::presentation::theme::GetCurrentTheme()->CreateWindowStyle())
		{
		}
	};

}
namespace vl
{
	namespace reflection
	{
		namespace description
		{
			DECL_TYPE_INFO(demo::AnotherWindow)
			DECL_TYPE_INFO(demo::MainWindow)

		}
	}
}
namespace demo
{
	class AnotherWindow : public demo::AnotherWindow_<demo::AnotherWindow>
	{
		friend class demo::AnotherWindow_<demo::AnotherWindow>;
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<demo::AnotherWindow>;
	protected:

		// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)
		void OnCreate();
		void OnDestroy();
		// #endregion CLASS_MEMBER_GUIEVENT_HANDLER
	public:
		AnotherWindow();
		~AnotherWindow();
	};
}



#endif