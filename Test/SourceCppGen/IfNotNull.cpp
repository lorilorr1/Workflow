/***********************************************************************
Generated from ../Resources/Codegen/IfNotNull.txt
***********************************************************************/

#include "IfNotNull.h"

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_IfNotNull)
	vl_workflow_global::IfNotNull instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_IfNotNull)

namespace vl_workflow_global
{
	::vl::WString IfNotNull::main()
	{
		throw 0;
	}

	IfNotNull& IfNotNull::Instance()
	{
		return Getvl_workflow_global_IfNotNull().instance;
	}
}
