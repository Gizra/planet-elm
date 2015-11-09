Feature: User login
  In order to be able to get updated on the new site content
  As an anonymous user
  I should be able to access the RSS feed

  @api
  Scenario: Access RSS feed
    Given I am an anonymous user
     When I visit "/rss.xml"
     Then I should see ""
