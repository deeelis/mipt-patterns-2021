#include <iostream>
#include <string>
#include <vector>

class Unit {
public:
  virtual ~Unit() {}
  virtual std::string name() = 0;
};


class Spyware : public Unit {
public:
  std::string name() override {
    return "Spyware";
  }
};

class Trojan : public Unit {
public:
  std::string name() override {
    return "Trojan";
  }
};

class Detector : public Unit {
public:
  std::string name() override {
    return "Detector";
  }
};

class Filter : public Unit {
public:
  std::string name() override {
    return "Filter";
  }
};


class Team {
public:
  std::vector<Unit*> units;
  virtual ~Team() {
    for (int i = 0; i < units.size(); ++i) {
      delete units[i];
    }
  }
  virtual std::string name() = 0;
  virtual std::string first_unit_name() = 0;
  virtual std::string second_unit_name() = 0;
  virtual Unit* make_first_unit() = 0;
  virtual Unit* make_second_unit() = 0;
};

class VirusTeam : public Team {
public:
  std::string name() override {
    return "Virus team";
  }

  std::string first_unit_name() override {
    return "spyware";
  }

  Unit* make_first_unit() override {
    return new Spyware;
  }

  std::string second_unit_name() override {
    return "trojan";
  }

  Unit* make_second_unit() override {
    return new Trojan;
  }
};


class AntivirusTeam : public Team {
public:
  std::string name() override {
    return "Antivirus team";
  }

  std::string first_unit_name() override {
    return "detector";
  }

  Unit* make_first_unit() override {
    return new Detector;
  }

  std::string second_unit_name() override {
    return "filter";
  }

  Unit* make_second_unit() override {
    return new Filter;
  }
};


class Creator {
public:
  virtual ~Creator(){};
  virtual Team* Create() = 0;

  void execute() {
    Team* creator = this->Create();
    std::cout << "You choose " + creator->name() + "!" << '\n';
    std::cout << "Do you want to add unit? Enter yes/no" << '\n';
    std::string command, type;
    std::cin >> command;
    while (command == "yes") {
      std::cout << "What unit do you want to add? Enter " + creator->first_unit_name() + " or " + creator->second_unit_name() << '\n';
      std::cin >> type;
      if (type == creator->first_unit_name()) {
        creator->units.push_back(creator->make_first_unit());
      }
      if (type == creator->second_unit_name()) {
        creator->units.push_back(creator->make_second_unit());
      }

      std::cout << "More units? Enter yes or no" << '\n';
      std::cin >> command;
    }

    std::cout << "OK! All units are added\n" << "Print your units? Enter yes or no\n";
    std::cin >> command;
    if (command == "yes") {
      for (int i = 0; i < creator->units.size(); ++i) {
        std::cout << creator->units[i]->name() << '\n';
      }
    }
    delete creator;
  }
};

class VirusCreator : public Creator {
public:
  Team* Create() override {
    return new VirusTeam;
  }
};

class AntivirusCreator : public Creator {
public:
  Team* Create() override {
    return new AntivirusTeam();
  }
};


void ClientCode() {
  std::string command, team;
  std::cout << "Enter 'start' to start the game, enter 'exit' to exit the game" << '\n';
  std::cin >> command;
  if (command == "start") {
    std::cout << "What team do you want: Virus or Antivirus?" << '\n';
    std::cin >> team;
    Creator *creator;

    if (team == "Virus") {
      creator = new VirusCreator;
    } else if (team == "Antivirus") {
      creator = new AntivirusCreator;
    } else {
      std::cout << "Incorrect input. Exit!" << '\n';
      return;
    }

    creator->execute();
    std::cout << "Exit!\n";
    delete creator;
  }
}

int main() {
  ClientCode();
}