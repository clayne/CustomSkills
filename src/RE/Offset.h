#pragma once

namespace RE
{
	namespace Offset
	{
		namespace BGSPerk
		{
			inline constexpr auto GetRequirementsText = REL::ID(23826);
		}

		namespace BGSSkillPerkTreeNode
		{
			inline constexpr auto RefundPerks = REL::ID(52564);
		}

		namespace BSTArrayBase
		{
			inline constexpr auto ListAlloc = REL::ID(68163);
		}

		namespace CraftingSubMenus
		{
			namespace ConstructibleObjectMenu
			{
				inline constexpr auto CreationConfirmed = REL::ID(51369);
				inline constexpr auto UpdateBottomBar = REL::ID(51458);
			}
		}

		namespace LegendarySkillResetConfirmCallback
		{
			inline constexpr auto Run = REL::ID(52591);
		}

		namespace Main
		{
			inline constexpr auto OnIdle = REL::ID(36564);
		}

		namespace PlayerCharacter
		{
			inline constexpr auto Vtbl_ActorValueOwner = REL::ID(208050);
		}

		namespace PlayerSkills
		{
			inline constexpr auto GetSkillProgress = REL::ID(41559);
		}

		namespace StatsMenu
		{
			inline constexpr auto Animate = REL::ID(52517);
			inline constexpr auto Create = REL::ID(52612);
			inline constexpr auto CreateStars = REL::ID(52540);
			inline constexpr auto Ctor = REL::ID(52508);
			inline constexpr auto DtorImpl = REL::ID(52509);
			inline constexpr auto GetPerkCount = REL::ID(52537);
			inline constexpr auto GotoNode = REL::ID(52539);
			inline constexpr auto LastSelectedTree = REL::ID(383192);
			inline constexpr auto LoadSkydome = REL::ID(52531);
			inline constexpr auto ModifyPerkCount = REL::ID(52538);
			inline constexpr auto ProcessButton = REL::ID(52520);
			inline constexpr auto ProcessMessage = REL::ID(52510);
			inline constexpr auto ProcessRotateEvent = REL::ID(52532);
			inline constexpr auto Rotate = REL::ID(52534);
			inline constexpr auto SelectPerk = REL::ID(52521);
			inline constexpr auto SelectStar = REL::ID(52542);
			inline constexpr auto SetBeastSkillInfo = REL::ID(52546);
			inline constexpr auto SetCameraTarget = REL::ID(52530);
			inline constexpr auto SetSelectedTree = REL::ID(52539);
			inline constexpr auto SetSkillInfo = REL::ID(52527);
			inline constexpr auto UpdateSelectedTree = REL::ID(52543);
			inline constexpr auto UpdateSkillList = REL::ID(52525);
		}

		namespace TESClass
		{
			inline constexpr auto GetMaximumTrainingLevel = REL::ID(24450);
		}

		namespace TESObjectBOOK
		{
			inline constexpr auto Read = REL::ID(17842);
		}

		namespace TrainingMenu
		{
			inline constexpr auto SetTrainer = REL::ID(52666);
			inline constexpr auto Train = REL::ID(52667);
		}

		inline constexpr auto DebugMessageBox = REL::ID(55376);
		inline constexpr auto FadeOutGame = REL::ID(52847);
		inline constexpr auto GetActorValueInfo = REL::ID(27202);
		inline constexpr auto GetActorValueName = REL::ID(27192);
		inline constexpr auto GetActorValueColor = REL::ID(52945);
		inline constexpr auto GetComparisonValue = REL::ID(29919);
		inline constexpr auto IsBeastMode = REL::ID(406438);
		inline constexpr auto IsInMenuMode = REL::ID(403435);
		inline constexpr auto IsLegendaryDifficultyAvailable = REL::ID(15868);
		inline constexpr auto LastChosenMenuIndex = REL::ID(383192);
		inline constexpr auto OpenStatsMenu = REL::ID(52516);
		inline constexpr auto ShowHUDMessage = REL::ID(51646);
		inline constexpr auto ShowTrainingMenu = REL::ID(52942);
	}
}
