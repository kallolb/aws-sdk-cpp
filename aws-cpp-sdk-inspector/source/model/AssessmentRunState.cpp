﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/inspector/model/AssessmentRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace AssessmentRunStateMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int START_DATA_COLLECTION_PENDING_HASH = HashingUtils::HashString("START_DATA_COLLECTION_PENDING");
        static const int START_DATA_COLLECTION_IN_PROGRESS_HASH = HashingUtils::HashString("START_DATA_COLLECTION_IN_PROGRESS");
        static const int COLLECTING_DATA_HASH = HashingUtils::HashString("COLLECTING_DATA");
        static const int STOP_DATA_COLLECTION_PENDING_HASH = HashingUtils::HashString("STOP_DATA_COLLECTION_PENDING");
        static const int DATA_COLLECTED_HASH = HashingUtils::HashString("DATA_COLLECTED");
        static const int START_EVALUATING_RULES_PENDING_HASH = HashingUtils::HashString("START_EVALUATING_RULES_PENDING");
        static const int EVALUATING_RULES_HASH = HashingUtils::HashString("EVALUATING_RULES");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");


        AssessmentRunState GetAssessmentRunStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return AssessmentRunState::CREATED;
          }
          else if (hashCode == START_DATA_COLLECTION_PENDING_HASH)
          {
            return AssessmentRunState::START_DATA_COLLECTION_PENDING;
          }
          else if (hashCode == START_DATA_COLLECTION_IN_PROGRESS_HASH)
          {
            return AssessmentRunState::START_DATA_COLLECTION_IN_PROGRESS;
          }
          else if (hashCode == COLLECTING_DATA_HASH)
          {
            return AssessmentRunState::COLLECTING_DATA;
          }
          else if (hashCode == STOP_DATA_COLLECTION_PENDING_HASH)
          {
            return AssessmentRunState::STOP_DATA_COLLECTION_PENDING;
          }
          else if (hashCode == DATA_COLLECTED_HASH)
          {
            return AssessmentRunState::DATA_COLLECTED;
          }
          else if (hashCode == START_EVALUATING_RULES_PENDING_HASH)
          {
            return AssessmentRunState::START_EVALUATING_RULES_PENDING;
          }
          else if (hashCode == EVALUATING_RULES_HASH)
          {
            return AssessmentRunState::EVALUATING_RULES;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssessmentRunState::FAILED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AssessmentRunState::ERROR_;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AssessmentRunState::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_ERRORS_HASH)
          {
            return AssessmentRunState::COMPLETED_WITH_ERRORS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentRunState>(hashCode);
          }

          return AssessmentRunState::NOT_SET;
        }

        Aws::String GetNameForAssessmentRunState(AssessmentRunState enumValue)
        {
          switch(enumValue)
          {
          case AssessmentRunState::CREATED:
            return "CREATED";
          case AssessmentRunState::START_DATA_COLLECTION_PENDING:
            return "START_DATA_COLLECTION_PENDING";
          case AssessmentRunState::START_DATA_COLLECTION_IN_PROGRESS:
            return "START_DATA_COLLECTION_IN_PROGRESS";
          case AssessmentRunState::COLLECTING_DATA:
            return "COLLECTING_DATA";
          case AssessmentRunState::STOP_DATA_COLLECTION_PENDING:
            return "STOP_DATA_COLLECTION_PENDING";
          case AssessmentRunState::DATA_COLLECTED:
            return "DATA_COLLECTED";
          case AssessmentRunState::START_EVALUATING_RULES_PENDING:
            return "START_EVALUATING_RULES_PENDING";
          case AssessmentRunState::EVALUATING_RULES:
            return "EVALUATING_RULES";
          case AssessmentRunState::FAILED:
            return "FAILED";
          case AssessmentRunState::ERROR_:
            return "ERROR";
          case AssessmentRunState::COMPLETED:
            return "COMPLETED";
          case AssessmentRunState::COMPLETED_WITH_ERRORS:
            return "COMPLETED_WITH_ERRORS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AssessmentRunStateMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws