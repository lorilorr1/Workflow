﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
Parser::WfExpression.parser.txt

This file is generated by: Vczh Parser Generator
***********************************************************************/

#ifndef VCZH_WORKFLOW_EXPRESSION_WFEXPRESSIONPARSER_TRAVERSE
#define VCZH_WORKFLOW_EXPRESSION_WFEXPRESSIONPARSER_TRAVERSE

#include "../../Import/Vlpp.h"
#include "WfExpression_Ast.h"

namespace vl
{
	namespace workflow
	{
		namespace traverse_visitor
		{
			class TypeVisitor : public Object, public WfType::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfPredefinedType* node);
				virtual void Traverse(WfType* node);
				virtual void Traverse(WfTopQualifiedType* node);
				virtual void Traverse(WfReferenceType* node);
				virtual void Traverse(WfRawPointerType* node);
				virtual void Traverse(WfSharedPointerType* node);
				virtual void Traverse(WfNullableType* node);
				virtual void Traverse(WfEnumerableType* node);
				virtual void Traverse(WfMapType* node);
				virtual void Traverse(WfObservableListType* node);
				virtual void Traverse(WfFunctionType* node);
				virtual void Traverse(WfChildType* node);

				// VisitField (virtual) ------------------------------
				virtual void VisitField(WfType* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfPredefinedType* node)override;
				void Visit(WfTopQualifiedType* node)override;
				void Visit(WfReferenceType* node)override;
				void Visit(WfRawPointerType* node)override;
				void Visit(WfSharedPointerType* node)override;
				void Visit(WfNullableType* node)override;
				void Visit(WfEnumerableType* node)override;
				void Visit(WfMapType* node)override;
				void Visit(WfObservableListType* node)override;
				void Visit(WfFunctionType* node)override;
				void Visit(WfChildType* node)override;
			};

			class ExpressionVisitor : public Object, public WfExpression::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfThisExpression* node);
				virtual void Traverse(WfExpression* node);
				virtual void Traverse(WfTopQualifiedExpression* node);
				virtual void Traverse(WfReferenceExpression* node);
				virtual void Traverse(WfOrderedNameExpression* node);
				virtual void Traverse(WfOrderedLambdaExpression* node);
				virtual void Traverse(WfMemberExpression* node);
				virtual void Traverse(WfChildExpression* node);
				virtual void Traverse(WfLiteralExpression* node);
				virtual void Traverse(WfFloatingExpression* node);
				virtual void Traverse(WfIntegerExpression* node);
				virtual void Traverse(WfStringExpression* node);
				virtual void Traverse(WfUnaryExpression* node);
				virtual void Traverse(WfBinaryExpression* node);
				virtual void Traverse(WfLetExpression* node);
				virtual void Traverse(WfLetVariable* node);
				virtual void Traverse(WfIfExpression* node);
				virtual void Traverse(WfRangeExpression* node);
				virtual void Traverse(WfSetTestingExpression* node);
				virtual void Traverse(WfConstructorExpression* node);
				virtual void Traverse(WfConstructorArgument* node);
				virtual void Traverse(WfInferExpression* node);
				virtual void Traverse(WfTypeCastingExpression* node);
				virtual void Traverse(WfTypeTestingExpression* node);
				virtual void Traverse(WfTypeOfTypeExpression* node);
				virtual void Traverse(WfTypeOfExpressionExpression* node);
				virtual void Traverse(WfAttachEventExpression* node);
				virtual void Traverse(WfDetachEventExpression* node);
				virtual void Traverse(WfObserveExpression* node);
				virtual void Traverse(WfCallExpression* node);
				virtual void Traverse(WfFunctionExpression* node);
				virtual void Traverse(WfFunctionDeclaration* node);
				virtual void Traverse(WfDeclaration* node);
				virtual void Traverse(WfAttribute* node);
				virtual void Traverse(WfClassMember* node);
				virtual void Traverse(WfFunctionArgument* node);
				virtual void Traverse(WfNewClassExpression* node);
				virtual void Traverse(WfNewInterfaceExpression* node);

				// VisitField ----------------------------------------
				void VisitField(WfLetVariable* node);
				void VisitField(WfConstructorArgument* node);
				void VisitField(WfFunctionDeclaration* node);
				void VisitField(WfAttribute* node);
				void VisitField(WfClassMember* node);
				void VisitField(WfFunctionArgument* node);

				// VisitField (virtual) ------------------------------
				virtual void VisitField(WfExpression* node) = 0;
				virtual void VisitField(WfType* node) = 0;
				virtual void VisitField(WfStatement* node) = 0;
				virtual void VisitField(WfDeclaration* node) = 0;

				// Dispatch (virtual) --------------------------------
				virtual void Dispatch(WfVirtualExpression* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfThisExpression* node)override;
				void Visit(WfTopQualifiedExpression* node)override;
				void Visit(WfReferenceExpression* node)override;
				void Visit(WfOrderedNameExpression* node)override;
				void Visit(WfOrderedLambdaExpression* node)override;
				void Visit(WfMemberExpression* node)override;
				void Visit(WfChildExpression* node)override;
				void Visit(WfLiteralExpression* node)override;
				void Visit(WfFloatingExpression* node)override;
				void Visit(WfIntegerExpression* node)override;
				void Visit(WfStringExpression* node)override;
				void Visit(WfUnaryExpression* node)override;
				void Visit(WfBinaryExpression* node)override;
				void Visit(WfLetExpression* node)override;
				void Visit(WfIfExpression* node)override;
				void Visit(WfRangeExpression* node)override;
				void Visit(WfSetTestingExpression* node)override;
				void Visit(WfConstructorExpression* node)override;
				void Visit(WfInferExpression* node)override;
				void Visit(WfTypeCastingExpression* node)override;
				void Visit(WfTypeTestingExpression* node)override;
				void Visit(WfTypeOfTypeExpression* node)override;
				void Visit(WfTypeOfExpressionExpression* node)override;
				void Visit(WfAttachEventExpression* node)override;
				void Visit(WfDetachEventExpression* node)override;
				void Visit(WfObserveExpression* node)override;
				void Visit(WfCallExpression* node)override;
				void Visit(WfFunctionExpression* node)override;
				void Visit(WfNewClassExpression* node)override;
				void Visit(WfNewInterfaceExpression* node)override;
				void Visit(WfVirtualExpression* node)override;
			};

			class StatementVisitor : public Object, public WfStatement::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfBreakStatement* node);
				virtual void Traverse(WfStatement* node);
				virtual void Traverse(WfContinueStatement* node);
				virtual void Traverse(WfReturnStatement* node);
				virtual void Traverse(WfDeleteStatement* node);
				virtual void Traverse(WfRaiseExceptionStatement* node);
				virtual void Traverse(WfIfStatement* node);
				virtual void Traverse(WfWhileStatement* node);
				virtual void Traverse(WfTryStatement* node);
				virtual void Traverse(WfBlockStatement* node);
				virtual void Traverse(WfGotoStatement* node);
				virtual void Traverse(WfVariableStatement* node);
				virtual void Traverse(WfVariableDeclaration* node);
				virtual void Traverse(WfDeclaration* node);
				virtual void Traverse(WfAttribute* node);
				virtual void Traverse(WfClassMember* node);
				virtual void Traverse(WfExpressionStatement* node);

				// VisitField ----------------------------------------
				void VisitField(WfVariableDeclaration* node);
				void VisitField(WfAttribute* node);
				void VisitField(WfClassMember* node);

				// VisitField (virtual) ------------------------------
				virtual void VisitField(WfExpression* node) = 0;
				virtual void VisitField(WfType* node) = 0;
				virtual void VisitField(WfStatement* node) = 0;

				// Dispatch (virtual) --------------------------------
				virtual void Dispatch(WfVirtualStatement* node) = 0;
				virtual void Dispatch(WfCoroutineStatement* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfBreakStatement* node)override;
				void Visit(WfContinueStatement* node)override;
				void Visit(WfReturnStatement* node)override;
				void Visit(WfDeleteStatement* node)override;
				void Visit(WfRaiseExceptionStatement* node)override;
				void Visit(WfIfStatement* node)override;
				void Visit(WfWhileStatement* node)override;
				void Visit(WfTryStatement* node)override;
				void Visit(WfBlockStatement* node)override;
				void Visit(WfGotoStatement* node)override;
				void Visit(WfVariableStatement* node)override;
				void Visit(WfExpressionStatement* node)override;
				void Visit(WfVirtualStatement* node)override;
				void Visit(WfCoroutineStatement* node)override;
			};

			class DeclarationVisitor : public Object, public WfDeclaration::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfNamespaceDeclaration* node);
				virtual void Traverse(WfDeclaration* node);
				virtual void Traverse(WfAttribute* node);
				virtual void Traverse(WfClassMember* node);
				virtual void Traverse(WfFunctionDeclaration* node);
				virtual void Traverse(WfFunctionArgument* node);
				virtual void Traverse(WfVariableDeclaration* node);
				virtual void Traverse(WfEventDeclaration* node);
				virtual void Traverse(WfPropertyDeclaration* node);
				virtual void Traverse(WfConstructorDeclaration* node);
				virtual void Traverse(WfBaseConstructorCall* node);
				virtual void Traverse(WfDestructorDeclaration* node);
				virtual void Traverse(WfClassDeclaration* node);
				virtual void Traverse(WfEnumDeclaration* node);
				virtual void Traverse(WfEnumItem* node);
				virtual void Traverse(WfEnumItemIntersection* node);
				virtual void Traverse(WfStructDeclaration* node);
				virtual void Traverse(WfStructMember* node);

				// VisitField ----------------------------------------
				void VisitField(WfAttribute* node);
				void VisitField(WfClassMember* node);
				void VisitField(WfFunctionArgument* node);
				void VisitField(WfBaseConstructorCall* node);
				void VisitField(WfEnumItem* node);
				void VisitField(WfEnumItemIntersection* node);
				void VisitField(WfStructMember* node);

				// VisitField (virtual) ------------------------------
				virtual void VisitField(WfExpression* node) = 0;
				virtual void VisitField(WfDeclaration* node) = 0;
				virtual void VisitField(WfType* node) = 0;
				virtual void VisitField(WfStatement* node) = 0;

				// Dispatch (virtual) --------------------------------
				virtual void Dispatch(WfVirtualDeclaration* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfNamespaceDeclaration* node)override;
				void Visit(WfFunctionDeclaration* node)override;
				void Visit(WfVariableDeclaration* node)override;
				void Visit(WfEventDeclaration* node)override;
				void Visit(WfPropertyDeclaration* node)override;
				void Visit(WfConstructorDeclaration* node)override;
				void Visit(WfDestructorDeclaration* node)override;
				void Visit(WfClassDeclaration* node)override;
				void Visit(WfEnumDeclaration* node)override;
				void Visit(WfStructDeclaration* node)override;
				void Visit(WfVirtualDeclaration* node)override;
			};

			class VirtualDeclarationVisitor : public Object, public WfVirtualDeclaration::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfAutoPropertyDeclaration* node);
				virtual void Traverse(WfVirtualDeclaration* node);
				virtual void Traverse(WfDeclaration* node);
				virtual void Traverse(WfAttribute* node);
				virtual void Traverse(WfClassMember* node);
				virtual void Traverse(WfCastResultInterfaceDeclaration* node);

				// VisitField ----------------------------------------
				void VisitField(WfAttribute* node);
				void VisitField(WfClassMember* node);

				// VisitField (virtual) ------------------------------
				virtual void VisitField(WfExpression* node) = 0;
				virtual void VisitField(WfDeclaration* node) = 0;
				virtual void VisitField(WfType* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfAutoPropertyDeclaration* node)override;
				void Visit(WfCastResultInterfaceDeclaration* node)override;
			};

			class VirtualStatementVisitor : public Object, public WfVirtualStatement::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfForEachStatement* node);
				virtual void Traverse(WfVirtualStatement* node);
				virtual void Traverse(WfStatement* node);
				virtual void Traverse(WfSwitchStatement* node);
				virtual void Traverse(WfSwitchCase* node);
				virtual void Traverse(WfCoProviderStatement* node);

				// VisitField ----------------------------------------
				void VisitField(WfSwitchCase* node);

				// VisitField (virtual) ------------------------------
				virtual void VisitField(WfStatement* node) = 0;
				virtual void VisitField(WfExpression* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfForEachStatement* node)override;
				void Visit(WfSwitchStatement* node)override;
				void Visit(WfCoProviderStatement* node)override;
			};

			class CoroutineStatementVisitor : public Object, public WfCoroutineStatement::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfCoPauseStatement* node);
				virtual void Traverse(WfCoroutineStatement* node);
				virtual void Traverse(WfStatement* node);
				virtual void Traverse(WfCoOperatorStatement* node);

				// VisitField (virtual) ------------------------------
				virtual void VisitField(WfStatement* node) = 0;
				virtual void VisitField(WfExpression* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfCoPauseStatement* node)override;
				void Visit(WfCoOperatorStatement* node)override;
			};

			class VirtualExpressionVisitor : public Object, public WfVirtualExpression::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfBindExpression* node);
				virtual void Traverse(WfVirtualExpression* node);
				virtual void Traverse(WfExpression* node);
				virtual void Traverse(WfFormatExpression* node);
				virtual void Traverse(WfNewCoroutineExpression* node);
				virtual void Traverse(WfMixinCastExpression* node);
				virtual void Traverse(WfExpectedTypeCastExpression* node);
				virtual void Traverse(WfCoOperatorExpression* node);

				// VisitField (virtual) ------------------------------
				virtual void VisitField(WfExpression* node) = 0;
				virtual void VisitField(WfStatement* node) = 0;
				virtual void VisitField(WfType* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfBindExpression* node)override;
				void Visit(WfFormatExpression* node)override;
				void Visit(WfNewCoroutineExpression* node)override;
				void Visit(WfMixinCastExpression* node)override;
				void Visit(WfExpectedTypeCastExpression* node)override;
				void Visit(WfCoOperatorExpression* node)override;
			};

			class ModuleUsingFragmentVisitor : public Object, public WfModuleUsingFragment::IVisitor
			{
			public:

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfModuleUsingNameFragment* node);
				virtual void Traverse(WfModuleUsingFragment* node);
				virtual void Traverse(WfModuleUsingWildCardFragment* node);

				// Visitor Members -----------------------------------
				void Visit(WfModuleUsingNameFragment* node)override;
				void Visit(WfModuleUsingWildCardFragment* node)override;
			};

			class ModuleVisitor
				: public TypeVisitor
				, public ExpressionVisitor
				, public StatementVisitor
				, public DeclarationVisitor
				, public VirtualDeclarationVisitor
				, public VirtualStatementVisitor
				, public CoroutineStatementVisitor
				, public VirtualExpressionVisitor
				, public ModuleUsingFragmentVisitor
			{
			public:
				void VisitField(WfModule* node);

				// Traverse ------------------------------------------
				virtual void Traverse(vl::parsing::ParsingToken& token);
				virtual void Traverse(vl::parsing::ParsingTreeCustomBase* node);
				virtual void Traverse(WfModule* node);
				virtual void Traverse(WfModuleUsingPath* node);
				virtual void Traverse(WfModuleUsingItem* node);

				// VisitField ----------------------------------------
				void VisitField(WfModuleUsingPath* node);
				void VisitField(WfModuleUsingItem* node);

				// VisitField (virtual) ------------------------------
				void VisitField(WfType* node);
				void VisitField(WfExpression* node);
				void VisitField(WfStatement* node);
				void VisitField(WfDeclaration* node);
				void VisitField(WfModuleUsingFragment* node);

				// Dispatch (virtual) --------------------------------
				void Dispatch(WfVirtualExpression* node);
				void Dispatch(WfVirtualStatement* node);
				void Dispatch(WfCoroutineStatement* node);
				void Dispatch(WfVirtualDeclaration* node);
			};
		}
	}
}
#endif