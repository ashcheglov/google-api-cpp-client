// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2015-03-26 20:30:19 UTC
//   on: 2015-06-02, 17:00:10 UTC
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 139
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_LIVE_STREAM_CONFIGURATION_ISSUE_H_
#define  GOOGLE_YOUTUBE_API_LIVE_STREAM_CONFIGURATION_ISSUE_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class LiveStreamConfigurationIssue : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveStreamConfigurationIssue* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveStreamConfigurationIssue(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveStreamConfigurationIssue(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveStreamConfigurationIssue();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveStreamConfigurationIssue</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveStreamConfigurationIssue");
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * The long-form description of the issue and how to resolve it.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>reason</code>' attribute was set.
   *
   * @return true if the '<code>reason</code>' attribute was set.
   */
  bool has_reason() const {
    return Storage().isMember("reason");
  }

  /**
   * Clears the '<code>reason</code>' attribute.
   */
  void clear_reason() {
    MutableStorage()->removeMember("reason");
  }


  /**
   * Get the value of the '<code>reason</code>' attribute.
   */
  const StringPiece get_reason() const {
    const Json::Value& v = Storage("reason");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>reason</code>' attribute.
   *
   * The short-form reason for this issue.
   *
   * @param[in] value The new value.
   */
  void set_reason(const StringPiece& value) {
    *MutableStorage("reason") = value.data();
  }

  /**
   * Determine if the '<code>severity</code>' attribute was set.
   *
   * @return true if the '<code>severity</code>' attribute was set.
   */
  bool has_severity() const {
    return Storage().isMember("severity");
  }

  /**
   * Clears the '<code>severity</code>' attribute.
   */
  void clear_severity() {
    MutableStorage()->removeMember("severity");
  }


  /**
   * Get the value of the '<code>severity</code>' attribute.
   */
  const StringPiece get_severity() const {
    const Json::Value& v = Storage("severity");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>severity</code>' attribute.
   *
   * How severe this issue is to the stream.
   *
   * @param[in] value The new value.
   */
  void set_severity(const StringPiece& value) {
    *MutableStorage("severity") = value.data();
  }

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const StringPiece get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * The kind of error happening.
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

 private:
  void operator=(const LiveStreamConfigurationIssue&);
};  // LiveStreamConfigurationIssue
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_STREAM_CONFIGURATION_ISSUE_H_