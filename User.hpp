#pragma once

#include <cstdint>
#include <string>
#include <vector>

enum class UserCountry {
    RUSSIA = 1,
    USA = 2,
    BELARUS = 3,
    UKRAINE = 4, /* For how long? */
    POLAND = 5,
    FINLAND = 6,
    GERMANY = 7,
    /* More soom */
};

enum class UserLanguage {
    RU = 1, /* Russian */
    EN = 2, /* English */
    BY = 3, /* Belarus */
    UK = 4, /* Ukrain */ /* For how long? */
    PL = 5, /* Poland */
    FI = 6, /* Finland */
    GR = 7, /* Germany */
    /* More soon */
};

/* Small hint of User structure
 *
 * id: std::int64_t, Unique user ID
 * tgFirstName: std::string, first_name(name) in Telegram
 * tgLastName: std::string, last_name(last name) in Telegram
 * age: std::uint16_t, user's age
 * name: std::string, user's name
 * bio: std::string, user's bio
 * country: UserCountry, user's country
 * language: UserLanguage, user's language
 * city: std::string user's city
 * media: std::vector<std::string>, user's media(photo, video)
 * preferredCountries: std::vector<UserCountry>, user's preferred countries
 * preferredLanguages: std::vector<UserLanguage>, user's preferred languages
 * preferredAges: std::vector<std::uint16_t>, user's preferred ages
 * preferredCities: std::vector<std::string>, user's preferred cities
 *
 */
struct User {
    std::int64_t id;
    std::string tgFirstName;
    std::string tgLastName;
    std::uint16_t age;
    std::string name;
    std::string bio;
    UserCountry country;
    UserLanguage language;
    std::string city;
    std::vector<std::string> media;
    std::vector<UserCountry> preferredCountries;
    std::vector<UserLanguage> preferredLanguages;
    std::vector<std::uint16_t> preferredAges;
    std::vector<std::string> preferredCities;
};
