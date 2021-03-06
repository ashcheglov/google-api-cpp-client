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
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_CDN_SETTINGS_H_
#define  GOOGLE_YOUTUBE_API_CDN_SETTINGS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/ingestion_info.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Brief description of the live stream cdn settings.
 *
 * @ingroup DataObject
 */
class CdnSettings : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static CdnSettings* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CdnSettings(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CdnSettings(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~CdnSettings();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::CdnSettings</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::CdnSettings");
  }

  /**
   * Determine if the '<code>format</code>' attribute was set.
   *
   * @return true if the '<code>format</code>' attribute was set.
   */
  bool has_format() const {
    return Storage().isMember("format");
  }

  /**
   * Clears the '<code>format</code>' attribute.
   */
  void clear_format() {
    MutableStorage()->removeMember("format");
  }


  /**
   * Get the value of the '<code>format</code>' attribute.
   */
  const StringPiece get_format() const {
    const Json::Value& v = Storage("format");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>format</code>' attribute.
   *
   * The format of the video stream that you are sending to Youtube.
   *
   * @param[in] value The new value.
   */
  void set_format(const StringPiece& value) {
    *MutableStorage("format") = value.data();
  }

  /**
   * Determine if the '<code>ingestionInfo</code>' attribute was set.
   *
   * @return true if the '<code>ingestionInfo</code>' attribute was set.
   */
  bool has_ingestion_info() const {
    return Storage().isMember("ingestionInfo");
  }

  /**
   * Clears the '<code>ingestionInfo</code>' attribute.
   */
  void clear_ingestion_info() {
    MutableStorage()->removeMember("ingestionInfo");
  }


  /**
   * Get a reference to the value of the '<code>ingestionInfo</code>' attribute.
   */
  const IngestionInfo get_ingestion_info() const;

  /**
   * Gets a reference to a mutable value of the '<code>ingestionInfo</code>'
   * property.
   *
   * The ingestionInfo object contains information that YouTube provides that
   * you need to transmit your RTMP or HTTP stream to YouTube.
   *
   * @return The result can be modified to change the attribute value.
   */
  IngestionInfo mutable_ingestionInfo();

  /**
   * Determine if the '<code>ingestionType</code>' attribute was set.
   *
   * @return true if the '<code>ingestionType</code>' attribute was set.
   */
  bool has_ingestion_type() const {
    return Storage().isMember("ingestionType");
  }

  /**
   * Clears the '<code>ingestionType</code>' attribute.
   */
  void clear_ingestion_type() {
    MutableStorage()->removeMember("ingestionType");
  }


  /**
   * Get the value of the '<code>ingestionType</code>' attribute.
   */
  const StringPiece get_ingestion_type() const {
    const Json::Value& v = Storage("ingestionType");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>ingestionType</code>' attribute.
   *
   * The method or protocol used to transmit the video stream.
   *
   * @param[in] value The new value.
   */
  void set_ingestion_type(const StringPiece& value) {
    *MutableStorage("ingestionType") = value.data();
  }

 private:
  void operator=(const CdnSettings&);
};  // CdnSettings
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CDN_SETTINGS_H_
