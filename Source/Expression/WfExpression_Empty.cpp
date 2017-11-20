﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
Parser::WfExpression.parser.txt

This file is generated by: Vczh Parser Generator
***********************************************************************/

#include "../../Import/Vlpp.h"
#include "WfExpression_Empty.h"

namespace vl
{
	namespace workflow
	{
		namespace empty_visitor
		{

/***********************************************************************
TypeVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void TypeVisitor::Visit(WfPredefinedType* node)
			{
			}

			void TypeVisitor::Visit(WfTopQualifiedType* node)
			{
			}

			void TypeVisitor::Visit(WfReferenceType* node)
			{
			}

			void TypeVisitor::Visit(WfRawPointerType* node)
			{
			}

			void TypeVisitor::Visit(WfSharedPointerType* node)
			{
			}

			void TypeVisitor::Visit(WfNullableType* node)
			{
			}

			void TypeVisitor::Visit(WfEnumerableType* node)
			{
			}

			void TypeVisitor::Visit(WfMapType* node)
			{
			}

			void TypeVisitor::Visit(WfObservableListType* node)
			{
			}

			void TypeVisitor::Visit(WfFunctionType* node)
			{
			}

			void TypeVisitor::Visit(WfChildType* node)
			{
			}

/***********************************************************************
ExpressionVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void ExpressionVisitor::Visit(WfThisExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTopQualifiedExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfReferenceExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfOrderedNameExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfOrderedLambdaExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfMemberExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfChildExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfLiteralExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfFloatingExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfIntegerExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfStringExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfUnaryExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfBinaryExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfLetExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfIfExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfRangeExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfSetTestingExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfConstructorExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfInferExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTypeCastingExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTypeTestingExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTypeOfTypeExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTypeOfExpressionExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfAttachEventExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfDetachEventExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfObserveExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfCallExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfFunctionExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfNewClassExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfNewInterfaceExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfVirtualCfeExpression* node)
			{
				Dispatch(node);
			}

			void ExpressionVisitor::Visit(WfVirtualCseExpression* node)
			{
				Dispatch(node);
			}

/***********************************************************************
StatementVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void StatementVisitor::Visit(WfBreakStatement* node)
			{
			}

			void StatementVisitor::Visit(WfContinueStatement* node)
			{
			}

			void StatementVisitor::Visit(WfReturnStatement* node)
			{
			}

			void StatementVisitor::Visit(WfDeleteStatement* node)
			{
			}

			void StatementVisitor::Visit(WfRaiseExceptionStatement* node)
			{
			}

			void StatementVisitor::Visit(WfIfStatement* node)
			{
			}

			void StatementVisitor::Visit(WfWhileStatement* node)
			{
			}

			void StatementVisitor::Visit(WfTryStatement* node)
			{
			}

			void StatementVisitor::Visit(WfBlockStatement* node)
			{
			}

			void StatementVisitor::Visit(WfGotoStatement* node)
			{
			}

			void StatementVisitor::Visit(WfVariableStatement* node)
			{
			}

			void StatementVisitor::Visit(WfExpressionStatement* node)
			{
			}

			void StatementVisitor::Visit(WfVirtualCseStatement* node)
			{
				Dispatch(node);
			}

			void StatementVisitor::Visit(WfCoroutineStatement* node)
			{
				Dispatch(node);
			}

			void StatementVisitor::Visit(WfStateMachineStatement* node)
			{
				Dispatch(node);
			}

/***********************************************************************
DeclarationVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void DeclarationVisitor::Visit(WfNamespaceDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfFunctionDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfVariableDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfEventDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfPropertyDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfConstructorDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfDestructorDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfClassDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfEnumDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfStructDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfVirtualCfeDeclaration* node)
			{
				Dispatch(node);
			}

			void DeclarationVisitor::Visit(WfVirtualCseDeclaration* node)
			{
				Dispatch(node);
			}

/***********************************************************************
VirtualCfeDeclarationVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void VirtualCfeDeclarationVisitor::Visit(WfAutoPropertyDeclaration* node)
			{
			}

			void VirtualCfeDeclarationVisitor::Visit(WfCastResultInterfaceDeclaration* node)
			{
			}

/***********************************************************************
VirtualCseDeclarationVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void VirtualCseDeclarationVisitor::Visit(WfStateMachineDeclaration* node)
			{
			}

/***********************************************************************
VirtualCseStatementVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void VirtualCseStatementVisitor::Visit(WfForEachStatement* node)
			{
			}

			void VirtualCseStatementVisitor::Visit(WfSwitchStatement* node)
			{
			}

			void VirtualCseStatementVisitor::Visit(WfCoProviderStatement* node)
			{
			}

/***********************************************************************
CoroutineStatementVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void CoroutineStatementVisitor::Visit(WfCoPauseStatement* node)
			{
			}

			void CoroutineStatementVisitor::Visit(WfCoOperatorStatement* node)
			{
			}

/***********************************************************************
StateMachineStatementVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void StateMachineStatementVisitor::Visit(WfStateSwitchStatement* node)
			{
			}

			void StateMachineStatementVisitor::Visit(WfStateInvokeStatement* node)
			{
			}

/***********************************************************************
VirtualCfeExpressionVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void VirtualCfeExpressionVisitor::Visit(WfFormatExpression* node)
			{
			}

/***********************************************************************
VirtualCseExpressionVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void VirtualCseExpressionVisitor::Visit(WfBindExpression* node)
			{
			}

			void VirtualCseExpressionVisitor::Visit(WfNewCoroutineExpression* node)
			{
			}

			void VirtualCseExpressionVisitor::Visit(WfMixinCastExpression* node)
			{
			}

			void VirtualCseExpressionVisitor::Visit(WfExpectedTypeCastExpression* node)
			{
			}

			void VirtualCseExpressionVisitor::Visit(WfCoOperatorExpression* node)
			{
			}

/***********************************************************************
ModuleUsingFragmentVisitor
***********************************************************************/

			// Visitor Members -----------------------------------

			void ModuleUsingFragmentVisitor::Visit(WfModuleUsingNameFragment* node)
			{
			}

			void ModuleUsingFragmentVisitor::Visit(WfModuleUsingWildCardFragment* node)
			{
			}
		}
	}
}
